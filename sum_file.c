#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tok_sum(char* buf);

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("init error!\n");
		return 1;
	}
	FILE *fp = fopen(argv[1],"r");
	if (fp == NULL)
	{
		printf("open file %s failed!\n", argv[1]);
		return 2;
	}
	char buf[1000];

	if(fgets(buf,sizeof(buf),fp)!=NULL)
	{
		printf("%s",buf);
	}

	int s = tok_sum(buf);
	printf("sum: %d\n", s);

	fclose(fp);
	return 0;
}

int tok_sum(char *buf)
{
	char delims[] = " ,";
	char *token = strtok(buf,delims);
	int sum = 0;
	while (token != NULL)
	{
		int num = atoi(token);
		sum = sum + num;

		token = strtok(NULL, delims);
	}
	return sum;
}
