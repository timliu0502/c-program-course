#include "my_array.h"
#include<stdio.h>

void print_array(int *a, int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
