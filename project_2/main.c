#include<stdio.h>
#include<stdlib.h>
#include"my_array.h"

int main (int argc, char*argv[])
{
        if (argc < 2)
        {
                printf("Please load a file!\n");
                return 1;
        }

        FILE *fp = fopen(argv[1],"r");
        if (fp == NULL)
        {
                printf("open file %s failed!\n");
                return 2;
        }


        int arr[1000];
        char buf[1000];

        while (fgets(buf,sizeof(buf),fp) != NULL)
        {
                int len = buf2arr (buf,arr);
                int max_v = find_max(arr, len);
                int min_v = find_min(arr, len);

                printf("max:%d, min:%d\n", max_v, min_v);
        }
        fclose(fp);
}

