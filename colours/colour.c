#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
	printf("An argument is required.\n\n");

	printf(KNRM "normal\t1\n");
	printf(KRED "red\t2\n");
	printf(KGRN "green\t3\n");
	printf(KYEL "yellow\t4\n");
	printf(KBLU "blue\t5\n");
	printf(KMAG "orange\t6\n");
	printf(KCYN "cyan\t7\n");
	printf(KWHT "white\t8\n");
	printf(RESET "reset\t0\n");
	return 1;
    }
    int x = atoi(argv[1]);

    switch(x)
    {
	case 0:
	    printf(RESET "reset\n");
	    break;
	case 1:
	    printf(KNRM "normal\n");
	    break;
	case 2:
	    printf(KRED "red\n");
	    break;
	case 3:
	    printf(KGRN "green\n");
	    break;
	case 4:
	    printf(KYEL "yellow\n");
	    break;
	case 5:
	    printf(KBLU "blue\n");
	    break;
	case 6:
	    printf(KMAG "orange\n");
	    break;
	case 7:
	    printf(KCYN "cyan\n");
	    break;
	case 8:
	    printf(KWHT "white\n");
	    break;
	default:
	    printf(RESET "reset\n");
	    break;
    }

    return 0;
}
