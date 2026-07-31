#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
    if(argc < 1)
    {
        printf("init error!\n");
	return  1;
    }
    
    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < argc; ++i)
    {
	int a = atoi(argv[i]);

        if (a % 2 == 0)
	{

            even_sum = even_sum + a;
	}
	else
	{
	    odd_sum = odd_sum + a;
	}
    }

    printf("odd sum: %d\n", odd_sum);
    printf("even_sum: %d\n", even_sum);

    return 0;
}
