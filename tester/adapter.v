`timescale 1ns / 1ps

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

module adapter(led_output_uut, led_output_ref, alert_uut, alert_ref, value, enable, Q_uut, Q_ref, R_uut, R_ref, N, D);

`include "adapter.inc"

output [`TEMP_WIDTH*2-1 : 0] Q_uut;
output [`TEMP_WIDTH*2-1 : 0] R_uut;
output [`TEMP_WIDTH*2-1 : 0] Q_ref;
output [`TEMP_WIDTH*2-1 : 0] R_ref;
input  [`TEMP_WIDTH*2-1 : 0] N;
input  [`TEMP_WIDTH*2-1 : 0] D;

output [`T_MAX - `T_MIN : 0] led_output_uut;
output [`T_MAX - `T_MIN : 0] led_output_ref;
output alert_uut;
output alert_ref;
input  [`S_NR*`TEMP_WIDTH-1 : 0] value;
input  [`S_NR-1 : 0]   enable;

temperature_top uut(
	.led_output_o(led_output_uut),
	.alert_o(alert_uut),
	.sensors_data_i(value),
	.sensors_en_i(enable)
);

ref_temperature_top ref(
	.led_output_o(led_output_ref),
	.alert_o(alert_ref),
	.sensors_data_i(value),
	.sensors_en_i(enable)
);

division div_uut (
    .N(N),
    .D(D),
    .Q(Q_uut),
	.R(R_uut)
);

ref_division div_ref (
	.N(N),
    .D(D),
    .Q(Q_ref),
	.R(R_ref)
);


endmodule
