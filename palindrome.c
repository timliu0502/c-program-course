#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("please input a string!\n");
		return 1;
	}

	char *a = argv[1];

	int n = strlen(a);
	bool res = true;

	for(int i = 0; i < n/2; ++i)
	{
		if(a[i] != a[n-1-i])
		{
			res = false;
			break;
		}
	}

	if(res)
	{
		printf("%s is a palindrome!\n", a);
	}
	else
	{
		printf("%s is not a palindrome!\n", a);
	}

	return 0;
}
