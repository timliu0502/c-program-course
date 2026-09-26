#include"my_sorting.h"
#include"my_array.h"
#include<stdio.h>

int main(int argc, char *argv[])
{	
	int arr[16] = { 2, 3, 4, 5, 3, 6, 8, 6, 54, 4, 3, 2, 9, 8, 76, 0};

	bubble_sort(arr, 16);

	print_array(arr, 16);

	return 0;
}
