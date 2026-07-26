#include <stdio.h>
#include <stdlib.h>

int main( int argc, char*argv[])
{
    if(argc < 2)
    {
        printf("initialization error!\n");
	return 1;
    }

    int a = atoi(argv[1]);

    char y;

    printf("Please input an integer:");
    scanf("%c", &y);


    if(y < '0' || y > '9')
    {
        printf("wrong input!\n");
	return 1;
    }

    int x = atoi(&y);
    int p = a * x;

    printf("%d * %d = %d\n", a, x , p);

    return 0;
}

