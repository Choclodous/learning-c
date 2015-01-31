#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
	printf("Try running with some numbers as an argument.\n");

	return 1;
    }
    
    int i = 1;

    while(i < argc)
    {
	long lex = atoi(argv[i]);
	printf("Num = %ld\tOctal = %#o\tHex = %#x\n", lex, lex, lex);
	++i; //prints all arguments in all 3 formats.
    }

    printf("Done.\n");

    return 0;
}
