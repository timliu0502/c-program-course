#include<stdio.h>
#include"my_sorting.h"
#include"my_array.h"

int main(int argc, char*argv[])
{
        if (argc != 2)
        {
                printf("no init file detected!\n");
                return 1;
        }

        char * filename = argv[1];
        FILE * fp = fopen(filename, "r");

        if(fp == NULL)
        {
                printf("open %s failed.\n", filename);
                return 2;
        }

        char buf [1000];
	int arr [1000];

        while (fgets(buf,sizeof(buf),fp) != NULL)
        {
                int len = buf2array(buf,arr);
		exchange_sort(arr, len);
	        print_array(arr, len);
        }
        fclose(fp);


        return 0;
}


