#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int array_insert(int*b,int len, int y)
{
    int j = 0;
    for(int i = 0; i < len; ++i)
    {
        if(b[i]>y)
	{
	    j = i;
	    break;
	}
    }
    printf("j = %d\n", j);

    for(int i = len-2; i>=j; --i)
    {
        b[i+1] = b[i];
    }
    b[j] = y;

    return 0;
}

int print_array(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Please input a comma-seperated array");
	return 1;
    }	
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
    int *a = (int *) malloc((num_count + 1) * sizeof(int));


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
    printf("Before insertion:\n");
    print_array(a, num_count + 1);

    int x = atoi(argv[2]);
    array_insert(a, num_count +1, x);

    printf("After insertion:\n");
    print_array(a, num_count + 1);



    /*
     * Free memory
     */
    free(a); a = NULL;

    return 0;
}
