#include"my_sorting.h"

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}


void bubble_sort(int *arr, int len)
{
	for(int i = 0; i < len - 1; ++i)
	{
		int idx = min_idx(arr, i, len-i);
		swap(&arr[i], &arr[idx]);

	}
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


		
