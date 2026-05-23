#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "myarray.h"



int contra(int *va,int la, int *vb, int lb)
{
    int total = 0;
    int shortest_length = la;

    if (la > lb)
    {
        shortest_length = lb;
    }

    for (int i = 0; i < shortest_length; ++i)
    { 
        total += va[i] + vb[i];
    }

    return total;

}

int process_file(char * filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error; Opening file failed");
	return 1;
    }
    char buf[255];


    /*read first row from file
     */
    char *p = fgets(buf, sizeof(buf), fp);

    int va[100];
    int la = 0;

    char * token = strtok(buf, ",\n");
    while(token!=NULL)
    {
        va[la] = atoi(token);
        la += 1;

        token = strtok(NULL, ",\n");
    }

    print_array(va, la);
    




    /* Read second row from file*/

    p = fgets(buf, sizeof(buf), fp);

    int vb[100];
    int lb = 0;

    token = strtok(buf, ",\n");
    while(token!=NULL)
    {
        vb[lb] = atoi(token);
        lb += 1;

        token = strtok(NULL, ",\n");
    }

    print_array(vb, lb);

    int result = contra(va, la, vb, lb);
    printf("The dot product is: %d\n", result);
    
    fclose(fp);
    return 0;
}


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please input file name\n");

	return 1;
    }
    
    char* filename = argv[1];
    process_file(filename);


    return 0;

}




