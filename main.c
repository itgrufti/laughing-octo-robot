#include <stdio.h>

int main ( int argc, char *argv[] ) // Ich glaube, hier ist etwas falsch, ich komme aber nicht drauf, was.
	{
		// Wenn das erste Argument -h oder --help ist, Hilfe anzeigen.
		if( argv[1] == "-h" || argv[1] == "--help" ){
			printf(" Hilfe ausgeführt!\n");
			printf("-h, --help	Hilfe zeigen.\n");
			printf("-t, --test  Testfunktion");
			return 0;
		}
		// Wenn das erste Argument -t oder --test ist, gib etwas aus.
		else if( argv[1] == "-t" || argv[1] == "--test" ){
			printf("Test Erfolgreich\n");
			return 0;
		}
		else{
			char eins, zwei;
			eins = argv[0];
			zwei = argv[1];
			printf("Normaler Start\n");
			printf("%d\n", eins);
			printf("%d\n", zwei);
			return 0;
		}
}
