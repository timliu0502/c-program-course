#include<stdlib.h>
#include<string.h>

int buf2arr(char *buf, int *arr)
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

int find_max (int *arr, int n)
{
        int m = arr[0];
        for (int i = 1; i < n; ++i)
        {
                if (arr[i] > m)
                {
                        m = arr[i];
                }
        }
        return m;
}

int find_min (int *arr, int n)
{
        int m = arr[0];
        for (int i = 1; i < n; ++i)
        {
                if (arr[i] < m)
                {
                        m = arr[i];
                }
        }
        return m;
}

