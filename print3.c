#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print3(int *arr, int n, int t)
{
    for (int i = 0; i < n; ++i)
    {
        if ((i + 1)%3 ==0)
	{
	    if (t == 1)

	        printf("%d" , arr[i]);

	    else

	        printf("%d ", arr[i] * 3);
	}
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please provide numbers. \n");
    
    else

	return 1;
    }

    char *str = argv[1];

    int n = strlen(str);

    int *arr = (int *)malloc(sizeof(int)*n);

    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; ++i)
    {
        arr[i] = atoi(argv[i + 1]);
    }

    for (int i = 0; i < n; ++i)
    {
        if ((i + 1)%3 == 0)
	{
	    printf("%d", arr[i]);
	}
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
