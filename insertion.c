#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    /*input 1: comma seperated sorted num like 1,3,5,7,9
     *input 2: the num to be inserted
     *output: a sorted array
     */
    int len1 = strlen(argv[1]);
    int comma_count = 0;
    for (int i = 0 ; i < len1; ++i)
    {
        if(argv[1][i] == ',')
	{
	    comma_count++;
        }
    }
    int num_count = comma_count + 1;
    int *a = (int *) malloc(num_count * sizeof(int));
    
    a[0] = atoi(&argv[1][0]);
    
    
    int j = 1;
    for (int i = 0; i < len1; ++i)
    {

	if (argv[1][i] == ',')
	{
            a[j] = atoi(&argv[1][i + 1]);
	    j += 1;
	}
    }
    for (int i = 0; i < num_count; i++)
    {
        printf("%d\n", a[i]);
    }


    /*
     * Free memory
     */
    free(a); a = NULL;

    return 0;
}
