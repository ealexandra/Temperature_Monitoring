`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:32:54 11/11/2020 
// Design Name: 
// Module Name:    division 
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
module division(
    output reg[15:0] Q,
	 output reg[15:0] R,
	 input     [15:0] N,
	 input     [15:0] D);

//Am implementat algoritmul din resurse pentru modulul division

	integer i;
	always@(*) begin
		Q = 0;
		R = 0;
		for (i = 16-1; i >= 0; i = i-1) begin
			R = R << 1;
			R[0] = N[i];
			if (R >= D) begin
				R = R - D;
				Q[i] = 1;
			end
		end	
	end

endmodule
