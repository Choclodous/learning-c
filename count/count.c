#include <stdio.h>
#include <time.h>

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KBLU  "\x1B[34m"
#define RESET "\033[0m"

int main(int argc, char *argv[])
{
    int i;
    int j=0;

    printf(KBLU "Loop for (n): " RESET);
    scanf("%d", &i);

    while(j <= i)
    {
	printf(KRED "%d\n" RESET, j);
	j++;
	sleep(1);	
    }
    printf(KGRN "Done\n" RESET);

    return 0;
}
