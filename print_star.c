#include<stdio.h>
#include<stdlib.h>

int print_space(int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf(" ");
    }
    return 0;
}

int print_char(int n)
{
    for (int i = 0; i < n; ++i)
    {
	printf("*");
    }
    return 0;
}

int print_triangle(int row)
{
    for (int i = 1; i<= row; ++i)
    {
        int space_count = row - i;

	for (int x = 0; x < space_count; ++x)

	{
	    printf(" ");
	}

	        int star_num = 2 * i - 1;
		for (int j = 0; j < star_num; ++j)
		{
		    printf("*");
		}

		printf("\n");
    }

    return 0;
}

int main(int argc, char*argv[])
{

    if (argc < 2)
    {
        printf("Please input a number while running the program");
        return 1;
    }

    int a = atoi(argv[1]);

    print_triangle(a);

    int row = a - 1;

    for (int i = 0; i < row; ++i)
    {
        print_space(i + 1);
        

	int star_num = (2 * row - 1 - 2 * i);
	print_char(star_num);
	printf("\n");
    }

    return 0;

}
