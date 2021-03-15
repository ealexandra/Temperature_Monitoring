////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Ovidiu Moldoveanu
//
// Create Date:   15:51:30 30/10/2020
// Design Name:   tester combinational
// Module Name:   tester
// Project Name:  practical test
// Target Device: ISim
// Tool versions: 14.6
// Description:   tester for combinational module
////////////////////////////////////////////////////////////////////////////////

`define TEMP_WIDTH 		 8
`define T_MAX			26
`define T_MIN			19
`define S_NR			 5
`define STIMULUS_WIDTH 292

task print_input;

input  [`S_NR*`TEMP_WIDTH-1 : 0] value;
input  [`S_NR-1 : 0]   enable;

integer i;
reg[`TEMP_WIDTH-1 : 0] t_value;
reg[`S_NR-1 : 0] en;

begin
	$write("Testing inputs: \nTEMP:");
	for(i = `S_NR; i > 0; i = i - 1)
	begin
	    t_value = value[`TEMP_WIDTH * i - 1 -: `TEMP_WIDTH]; 
	    $write("%d ", t_value);
	end
	$write(", ");
	en = enable;
	$write("Enable: %b", en);
end

endtask

task print_output;

input [`T_MAX - `T_MIN : 0] led_output;
input alert;

reg[`T_MAX - `T_MIN : 0] a;
reg b;
begin
    a = led_output;
    b = alert;
    $write("Results: LED = %b, alert = %d", a, b);
end

endtask

task print_division_input;

input [`TEMP_WIDTH*2-1 : 0] N;
input [`TEMP_WIDTH*2-1 : 0] D;

reg[`TEMP_WIDTH*2-1 : 0] a;
reg[`TEMP_WIDTH*2-1 : 0] b;
begin
    a = N;
    b = D;
    $write("testing: N = %d, D = %d", a, b);
end

endtask


task print_division_output;

input [`TEMP_WIDTH*2-1 : 0] Q;
input [`TEMP_WIDTH*2-1 : 0] R;

reg[`TEMP_WIDTH*2-1 : 0] a;
reg[`TEMP_WIDTH*2-1 : 0] b;
begin
    a = Q;
    b =R;
    $write("results: Q = %d, R = %d", a, b);
end

endtask
