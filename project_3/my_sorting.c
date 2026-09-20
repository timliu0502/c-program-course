#include"my_sorting.h"

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

int min_idx(int *arr, int start, int len)
{
	int min_num = arr[start];
	int idx = start;
	for (int i = start; i < start + len; ++i)
	{
		if (arr[i] < min_num)
		{
			min_num = arr[i];
			idx = i;
		}
	}
	return idx;
}


		
