#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char *x, char *y)
{
        char t = *x;
        *x = *y;
        *y = t;
}

int main(int argc, char *argv[])
{
        if (argc != 2)
        {
                printf("please input a string!\n");
                return 1;
        }

        char *c = argv[1];

        int len = strlen(c);
	
	for(int i = 0; i < len /2; i++)
	{
		swap(&c[i], &c[len - i - 1]);
	}

	printf("%s\n", c);

}

