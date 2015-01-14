#include <stdio.h>

int main(int argc, char *argv[])
{
    int nx, ix, answer;

    printf("Add two numbers!\n");

    if(argc==3)
    {
	nx = atoi(argv[1]);
	ix = atoi(argv[2]);
    }
    else
    {
	printf("Number 1: ");
	scanf("%d", &nx);

	printf("Number 2: ");
	scanf("%d", &ix);

    }
    answer = nx + ix;
    
    printf("%d + %d = %d\n", nx, ix, answer);

    return 0;
}
