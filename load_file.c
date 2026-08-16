#include<string.h>
#include<stdio.h>
#include<stdlib.h>

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

	char buf [100];
	char * p = fgets(buf, 200, fp);

	if (p != NULL)
	{
		printf("%s\n", buf);
	}
	else
	{
		printf("readding error!\n");
	}
	fclose(fp);

return 0;
}

