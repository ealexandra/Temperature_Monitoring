`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:28:10 11/11/2020 
// Design Name: 
// Module Name:    temperature_top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module temperature_top(
    output[7:0] led_output_o,
	 output 		alert_o,
	 input[39:0] sensors_data_i,
	 input [4:0] sensors_en_i);
	 
	 //Variabile necesaere
	 wire [7:0] nr_active_sensors_o;                  //pentru a putea instantia modulul sensors_input
	 wire[15:0] temp_sum_o;                           //pentru a putea instantia modulul sensors_input
	 wire[15:0] Q;                                    //pentru a putea instantia modulul division
	 wire[15:0] R;                                    //pentru a putea insatntia modulul division
	 wire[15:0] nr_sen;                               //salvez numarul de senzori pe 16 biti                           
	 
	 sensors_input s_inst(temp_sum_o, nr_active_sensors_o, sensors_data_i, sensors_en_i);
	 assign nr_sen = {8'b0, nr_active_sensors_o};
	 division div_inst(Q, R, temp_sum_o, nr_sen);
	 output_display o_dis_inst(led_output_o, alert_o, Q, R, nr_active_sensors_o);
	 
endmodule
