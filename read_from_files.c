#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int print_array(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

int min_value_location(int * a, int len)
{
    int idx = 0;
    int m = a[0];
    for (int i = 1; i<len; ++i)
    {
        if (a[i] < m)
	{
            m = a[i];
	    idx = i;
	}    
    }

    //printf("The min value is: %d\n ,the index of the min is: %d\n",m,idx);
    for (int i = 0; i < len; ++i);                                                   


    a[idx] = a[0];
    a[0] = m;


    return 0;
}

int sort_array(int *a, int len)
{
    for(int i = 0; i<len - 1; ++i)
    {
        min_value_location(a + i, len - i);
    }
}


int print_file(char * filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {   
	printf("Error:open file failed.\n");
        return 1;
    }

    char buf[255];
    char *p = fgets(buf,sizeof(buf),fp);
    while (fgets(buf, sizeof(buf), fp))
    {
	int a[10];
	int len = 0;

        char * token = strtok(buf, ",\n");

	while (token !=NULL)
	{
	    a[len] = atoi(token);
	    len += 1;

            token = strtok(NULL, ",\n");
	}
        printf("\n");
	printf("length:%d\n", len);

	sort_array(a, len);
	print_array(a, len);

    }

   fclose(fp);

   return 1;
}

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Please input a filename!\n");
        return 1;
    }

    /* argv[1] has the input filename */
    char * filename = argv[1];

    print_file(filename);

    return 0;
}
