#include"my_sorting.h"
#include<stdio.h>

int main(int argc, char *argv[])
{	
	int arr[16] = { 2, 3, 4, 5, 3, 6, 8, 6, 54, 4, 3, 2, 9, 8, 76, 0};

	for (int j = 0; j < 15; ++j)
	{
		int i = min_idx(arr, j, 16 - j);
		swap(&arr[j], &arr[i]);
	}

	for(int j = 0; j < 16; ++j)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");

	return 0;
}
