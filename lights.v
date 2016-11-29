// Implements a simple Nios II system for the DE-series board.
//          CLOCK_50 is the system clock
//          KEY[0] is the active-low system reset  

input [7:0] SW; 
input [0:0] KEY; 
output [7:0] LEDR;

nios_system NiosII (
   .reset_reset_n(KEY), 
   .switches_export(SW), 
   .leds_export(LEDR));