`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:30:19 11/11/2020 
// Design Name: 
// Module Name:    sensors_input 
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
module sensors_input(
    output reg[15:0] temp_sum_o,
	 output reg [7:0] nr_active_sensors_o,
	 input     [39:0] sensors_data_i,
	 input      [4:0] sensors_en_i);
	 
   //Verific pt fiecare senzor in parte starea in care se afla	 
	
	always@(*) begin
	temp_sum_o = 0;
	nr_active_sensors_o = 0;
		if(sensors_en_i[0]) begin
			temp_sum_o = temp_sum_o + sensors_data_i[7:0];
			nr_active_sensors_o = nr_active_sensors_o + 1;
		end
		if(sensors_en_i[1]) begin
			temp_sum_o = temp_sum_o + sensors_data_i[15:8];
			nr_active_sensors_o = nr_active_sensors_o + 1;
		end
		if(sensors_en_i[2]) begin
			temp_sum_o = temp_sum_o + sensors_data_i[23:16];
			nr_active_sensors_o = nr_active_sensors_o + 1;
		end
		if(sensors_en_i[3]) begin
			temp_sum_o = temp_sum_o + sensors_data_i[31:24];
			nr_active_sensors_o = nr_active_sensors_o + 1;
		end
		if(sensors_en_i[4]) begin
			temp_sum_o = temp_sum_o + sensors_data_i[39:32];
			nr_active_sensors_o = nr_active_sensors_o + 1;
		end
	end

endmodule
