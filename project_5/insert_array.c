#include<stdio.h>
#include "myarray.h"

int main(int argc, char *argv[])
{
	int j;
	int a[9] = {1,3,4,6,7,9,13,20};
	int x = 8;
	int n = 8;

	for(int i = 0; i < n; ++i)
	{
		if(a[i] > x)
		{
			j = i;
			break;
		}
	}
	printf("%d\n", j);
	
	for(int i = n - 1; i >= j; --i)
	{
		a[i + 1] = a[i];
	}

	a[j] = x;
	print_array(a, n + 1);
	return 0;
}
