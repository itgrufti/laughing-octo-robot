#include <stdio.h>
int parseArg(char* commandArg);

int main ( int argc, char *argv[] ) // Ich glaube, hier ist etwas falsch, ich komme aber nicht drauf, was.
{
	int option=parseArg(argv);
	// Wenn das erste Argument -h oder --help ist, Hilfe anzeigen.
	if( option==1 )
	{
		printf(" Hilfe ausgeführt!\n");
		printf("-h, --help	Hilfe zeigen.\n");
		printf("-t, --test  Testfunktion");
		return 0;
	}
	// Wenn das erste Argument -t oder --test ist, gib etwas aus.
	else if( option==2 )
	{	
		printf("Test Erfolgreich\n");
		return 0;
	}
	else if( option==666 )
	{
		char eins, zwei;
		eins = argv[0];
		zwei = argv[1];
		printf("Normaler Start\n");
		printf("%d\n", eins);
		printf("%d\n", zwei);
		return 0;
	}
}

int parseArg(char* commandArg)
{
	//Looking if the first and the second character is - and h ; return 1 if so
	if( commandArg[0]=='-' && commandArg[1]=='h')
	{
		return 1;
	}
	//So on for the other options
	if( commandArg[0]=='-' && commandArg[1]=='-' && commandArg[2]=='h' && commandArg[3]=='e' && commandArg[4]=='l' && commandArg[5]=='p' )
	{
		return 1;
	}
	
	
	if( commandArg[0]=='-' && commandArg[1]=='t')
	{
		return 2;
	}
	
	if( commandArg[0]=='-' && commandArg[1]=='-' && commandArg[2]=='t' && commandArg[3]=='e' && commandArg[4]=='s' && commandArg[5]=='t' )
	{
		return 2;
	}
	//Returning 666 if the option could not be found
	return 666;
}
