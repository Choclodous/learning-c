#include <stdio.h>

int main(void)
{
    char *myString;

    printf("sizeof(myString): %d\n", sizeof(myString));

    printf("sizeof(_Bool): %d\n", sizeof(_Bool));

    printf("sizeof(char): %d\n", sizeof(char));

    printf("sizeof(_Complex): %d\n", sizeof(_Complex));

    printf("sizeof(int): %d\n", sizeof(int));
    printf("sizeof(unsigned int): %d\n", sizeof(unsigned int));

    printf("sizeof(long): %d\n", sizeof(long));
    printf("sizeof(unsigned long): %d\n", sizeof(unsigned long));

    printf("sizeof(long long): %d\n", sizeof(long long));
    printf("sizeof(unsigned long long): %d\n", sizeof(unsigned long long));

    return 0;
}
