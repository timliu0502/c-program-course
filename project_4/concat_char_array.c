#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_array.h"

void copy_array(char *dst, char *src, char n)
{
	for (int i = 0; i < n; ++i)
	{
		dst[i] = src[i];
	}
}

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Please input 2 strings!\n");
		return 1;
	}

	char *a = argv[1];
	char *b = argv[2];

	int lena = sizeof(a);
        int lenb = sizeof(b);
	int lenc = lena + lenb;
	char *c = (char *) malloc(lenc);
	if(malloc == NULL)
	{
		printf("distribute memory failed!\n");
		return 1;
	}

	copy_array(c,a,lena);
	copy_array(&c[lena],b,lenb);

	printf("%s\n",c);
	
	free(c);
	c = NULL;

	return 0;
}
	
