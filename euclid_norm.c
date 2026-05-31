#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"myarray.h"

double euclid_norm(int *v, int len)
{
    /*Calculate the euclidean norm of using pythagorean theorem
     */



    return 0;
}

int get_vector(int *v, char *buf)
{
    /* parse a row of data, and keep the values 
     * into a vector/array.
     * 
     * - buf: row of data (string)
     * - v: the array to keep values
     */

    int len = 0;

    // tokenize the row
    char * token = strtok(buf, ",\n");
    while(token != NULL)
    {
        v[len] = atoi(token);
        len += 1;

        token = strtok(NULL,",\n");
    }
 
    return len;
}

void read_file(char *filename)
{
    FILE *fp = fopen(filename,"r");

    if (fp == NULL)
    {
        printf("Error: open file failed.\n");
        return;
    }

    char buf[255];

    char *p = fgets(buf, sizeof(buf), fp);
    while (p != NULL)
    {
        int va[100];
	int la = get_vector(va, buf);
	print_array(va, la);

	// 2) read/parse the 2nd row
        p = fgets(buf, sizeof(buf), fp);
    }

    fclose(fp);
    return;
}


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please input a filename!\n");
	return 1;
    }

    char *filename = argv[1];
    
    read_file(filename);

    return 0;
}
