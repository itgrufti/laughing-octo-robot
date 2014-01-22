#include <stdio.h>

int main ( int argc, char *argv[] )
	{
		// Wenn das erste Argument -h oder --help ist, Hilfe anzeigen.
		if( argv[1] == "-h" ) || ( argv[1] == "--help" ){
			printf(" Hilfe ausgeführt!\n");
			printf("-h, --help	Hilfe zeigen.\n");
			printf("-t, --test  Testfunktion");
			return 0;
		}
		// Wenn das erste Argument -t oder --test ist, gib etwas aus.
		else if( argv[1] == "-t" ) || ( argv[1] == "--test" ){
			printf("Test Erfolgreich");
			return 0;
		}
		else{
			printf("Normaler Start");
		}
}
