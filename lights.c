#define switches (volatile char *) 0x0002010 
#define leds (char *) 0x0002000
#define ledin (char *) 0x0002100

void main()
{ 
   while (1) {
		*leds = *switches;
		int switch0 = *switches % 16;
		int switch1 = *switches / 16;
		int multiplication = switch0 + switch1;
		int hex0 = multiplication % 10;
		int hex1 = multiplication / 10;
		*ledin = hex0 + hex1;
	}
}
