`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Ovidiu Moldoveanu
//
// Create Date:   13:05:30 30/10/2020
// Design Name:   tester combinational
// Module Name:   tester
// Project Name:  practical test
// Target Device: ISim
// Tool versions: 14.6
// Description:   tester for combinational module
////////////////////////////////////////////////////////////////////////////////

module tester;

`include "adapter.inc"

parameter early_exit = 0;                   // boolean; bail on first error
parameter show_div_output = 0;              // boolean; show what is being tested
parameter show_sys_output = 0;              // boolean; show what is being tested
parameter max_errors = 32;                  // integer; maximum number of errors to show

wire [`T_MAX - `T_MIN : 0] tst_led_output, ref_led_output;
wire tst_alert, ref_alert;
reg [`S_NR * `TEMP_WIDTH - 1 : 0] temp_value;
reg [`S_NR - 1 : 0]   temp_enable;

//Division UUT and reference
wire [`TEMP_WIDTH*2-1 : 0] tst_Q_out, ref_Q_out;
wire [`TEMP_WIDTH*2-1 : 0] tst_R_out, ref_R_out;
reg  [`TEMP_WIDTH*2-1 : 0] N;
reg  [`TEMP_WIDTH*2-1 : 0] D;

wire [(`S_NR * `TEMP_WIDTH * `STIMULUS_WIDTH) - 1 : 0] temp_list;
wire [(`S_NR * `STIMULUS_WIDTH) - 1 : 0] enable_list;
reg  [(`S_NR * `TEMP_WIDTH * `STIMULUS_WIDTH) - 1 : 0] a;
reg  [(`S_NR * `STIMULUS_WIDTH) - 1 : 0] b;

adapter adapter (
    .led_output_uut(tst_led_output),
    .led_output_ref(ref_led_output),
    .alert_uut(tst_alert),
    .alert_ref(ref_alert),
    .value(temp_value),
    .enable(temp_enable),
    .Q_uut(tst_Q_out),
    .Q_ref(ref_Q_out),
    .R_uut(tst_R_out),
    .R_ref(ref_R_out),
    .N(N),
    .D(D)
);

generate_stimuls stimuls(
    .temp_list(temp_list),
    .en_list(enable_list)
);

// Tester
integer i, j;                               // counters that enumerate all input operands

integer results_good;                       // number of outputs computed correctly
integer results_total;                      // total number of outputs

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file

reg [16*8-1:0] test_name;
real test_value;
real test_penalty;

integer config_file;

initial begin
    results_good = 0;
    results_total = 0;
    
    //////////// reading config file ////////////////
    config_file = $fopen("test.config", "r");
    if(!config_file) begin
        $write("error opening config file\n");
        $finish;
    end
    if($fscanf(config_file, "name=%16s\n", test_name) != 1) begin
        $write("error reading test name\n");
        $finish;
    end
    if($fscanf(config_file, "value=%f\n", test_value) != 1) begin
        $write("error reading test value\n");
        $finish;
    end
    if($fscanf(config_file, "penalty=%f\n", test_penalty) != 1) begin
        $write("error reading test penalty\n");
        $finish;
    end
    $fclose(config_file);
    ////////// reading config file ////////////////////

    case(test_name)
        "test_division": begin    
            for(i = 0; i < 2 ** `TEMP_WIDTH; i = i + 1) begin
                for(j = 1; j < 2 ** `TEMP_WIDTH; j = j + 1) begin
                    results_total = results_total + 1;

                    N = i;
                    D = j;
                    #1;                                 // needed to force update of output signals

                    if(show_div_output)
                        print_division_input(N, D);

                    if(tst_Q_out === ref_Q_out && tst_R_out === ref_R_out) begin       // result is good
                        results_good = results_good + 1;

                        if(show_div_output) begin
                            $write(", ");
                            print_division_output(ref_Q_out, ref_R_out);
                            $write("\tok\n");
                        end
                    end
                    else begin                          // result is wrong
                        if(show_div_output)
                            $write("\n");

                        if(show_div_output || (results_total - results_good <= max_errors)) begin
                            $write("\terror: ");
                            print_division_input(N, D);
                            $write(", ");
                            print_division_output(tst_Q_out, tst_R_out);
                            $write(", expected ");
                            print_division_output(ref_Q_out, ref_R_out);
                            $write("\n");
                        end
                        if(!show_div_output && (results_total - results_good == max_errors)) begin
                            $write("\t.\n");
                            $write("\t.\n");
                            $write("\t.\n");
                        end

                        if(early_exit) begin            // force exit from testing loop
                            i = 2 ** `TEMP_WIDTH;
                        end
                    end
                end 
            end
        end

        "test_system": begin
            #1;
            for(i = `STIMULUS_WIDTH; i > 0 ; i = i - 1) begin
                results_total = results_total + 1;
                
                a = temp_list << `S_NR * `TEMP_WIDTH * (`STIMULUS_WIDTH - i);
                b = enable_list << `S_NR * (`STIMULUS_WIDTH - i);

                temp_value = a[`S_NR * `TEMP_WIDTH * `STIMULUS_WIDTH - 1 : `S_NR * `TEMP_WIDTH * (`STIMULUS_WIDTH - 1) ];
                temp_enable = b[`S_NR * `STIMULUS_WIDTH - 1 : `S_NR * (`STIMULUS_WIDTH - 1) ]; 
                #1;

                if(show_sys_output)
                    print_input(temp_value, temp_enable);

                if(tst_led_output === ref_led_output && tst_alert === ref_alert) begin       // result is good
                    results_good = results_good + 1;

                    if(show_sys_output) begin
                        $write(", ");
                        print_output(ref_led_output, ref_alert);
                        $write("\tok\n");
                    end
                end
                else begin                          // result is wrong
                    if(show_sys_output)
                        $write("\n");

                    if(show_sys_output || (results_total - results_good <= max_errors)) begin
                        $write("\terror: ");
                        print_input(temp_value, temp_enable);
                        $write(", ");
                        print_output(tst_led_output, tst_alert);
                        $write(", expected ");
                        print_output(ref_led_output, ref_alert);
                        $write("\n");
                    end
                    if(!show_sys_output && (results_total - results_good == max_errors)) begin
                        $write("\t.\n");
                        $write("\t.\n");
                        $write("\t.\n");
                    end

                    if(early_exit) begin            // force exit from testing loop
                        i = 2 ** `STIMULUS_WIDTH;
                    end
                end
            end
        end

        default: begin end
    endcase 

    if(results_good == results_total)
        $write("test ok\n");

    percentage = results_good * 1.0 / results_total;
    grade = results_good * 1.0 / results_total;

    // print results
    file = $fopen("result.tester");
    $fwrite(file, "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n", test_value * (grade - 1.0), results_good, results_total, 100.0 * percentage);
    $fclose(file); 
end

endmodule
