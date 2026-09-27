#include "my_array.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_array(int *a, int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int buf2array (char *buf, int *arr)
{
        char *delims = " ,";
        char *token = strtok(buf,delims);
        int i = 0;
        while (token != NULL)
        {
                int x = atoi(token);
                arr[i++] = x;
                token = strtok(NULL, delims);
        }
        return i;
}


