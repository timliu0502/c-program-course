#include "myarray.h"
#include "stdio.h"

int sort_array(int *a, int len)
{
    for(int i = 0; i < len -1; ++i)
    {
        find_min_and_swap(a + i, len - i);
    }

    return 0;
}

int print_array(int *a, int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

int find_min_and_swap(int *a, int len)
{
    int j = 0;
    int m = a[0];
}

