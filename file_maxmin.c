#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int buf2arr (char *buf, int *arr)
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

	return 0;
}
