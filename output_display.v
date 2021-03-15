`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:34:57 11/11/2020 
// Design Name: 
// Module Name:    output_display 
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
module output_display(
   output reg[7:0] coded_out_o,
	output reg		 alert_o,
	input    [15:0] temp_Q_i,
	input    [15:0] temp_R_i,
   input     [7:0] active_sensors_nr);

	wire[15:0] Q_sens_nr;                            //catul impartirii numarului activi de senzori la 2
	wire[15:0] R_sens_nr;                            //restul impartirii numarului activi de senzori la 2
	wire[15:0] nr_s;                                 //numarul de senzori scris pe 16 biti
	wire[15:0] ct;                                   // are valoarea 2
	reg[7:0] rezultat_out;                           // valoarea numerica a mediei temperaturilor in urma aproximarii

	always@(temp_Q_i or temp_R_i or active_sensors_nr) begin               //aproximez media temperaturilor   
		if ( (temp_R_i * 2) >= active_sensors_nr ) begin
			rezultat_out = temp_Q_i +1 ;
		end 
		else begin
			rezultat_out = temp_Q_i;
		end
	end 
	
	always@(*) begin                                 //setez alarma in functie de aproximarea temperaturii si codific iesirea daca nu face parte din intervalul [19,26]
		if( rezultat_out > 26 ) begin 
			alert_o = 1;
			coded_out_o = 8'b1111_1111;
		end
		else if ( rezultat_out < 19 ) begin
			alert_o = 1;
			coded_out_o = 8'b0000_0001;
		end 
		else begin 
			alert_o = 0;
	end	

		case ( rezultat_out )                         //codificarea output-ului
			8'b00010011: coded_out_o = 8'b0000_0001;
			8'b00010100: coded_out_o = 8'b0000_0011;
			8'b00010101: coded_out_o = 8'b0000_0111;
			8'b00010110: coded_out_o = 8'b0000_1111;
			8'b00010111: coded_out_o = 8'b0001_1111;				
			8'b00011000: coded_out_o = 8'b0011_1111;
			8'b00011001: coded_out_o = 8'b0111_1111;
			8'b00011010: coded_out_o = 8'b1111_1111;
		endcase
	end

endmodule
