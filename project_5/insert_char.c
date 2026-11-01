#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
        int j;
        int n = strlen(argv[1]);
	char *buf = (char*) malloc (n + 1);
	char x;
	scanf("%c", &x);

	for(int i = 0; i < n; ++i)
	{
		buf[i] = argv[1][i];
	}

        for(int i = 0; i < n; ++i)
        {
                if(buf[i] > x)
                {
                        j = i;
                        break;
                }
        }
        printf("%d\n", j);

        for(int i = n - 1; i >= j; --i)
        {
                buf[i + 1] = buf[i];
        }

        buf[j] = x;
        printf("%s\n",buf);

	free(buf);
	buf = NULL;

        return 0;
}
