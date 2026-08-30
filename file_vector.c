#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

double tok_norm(char *buf)
{
        char delims[] = " ,";
        char *token = strtok(buf,delims);
        double sum = 0.0;
        while (token != NULL)
        {
                int num = atoi(token);
                sum = sum + num * num;

                token = strtok(NULL, delims);
        }

        double r = sqrt(sum);

        return r;
}

int main (int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("init error!\n");
		return 1;
	}
	FILE *fp = fopen(argv[1],"r");
	if (fp == NULL)
	{
		printf("open file %s failed\n", argv[1]);
		return 2;
	}
	char buf [1000];

	while (fgets(buf,sizeof(buf),fp)!=NULL)
	{
		printf("%s",buf);
		double s = tok_norm(buf);
		
		printf("norm = %f\n",s);
	}
	fclose(fp);

	return 0;
}
