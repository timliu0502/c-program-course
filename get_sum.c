#include<stdio.h>
#include <stdlib.h>
//Defind Sum of F
int get_sum(int n, int arr[])
{
    int curr_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        curr_sum = curr_sum + arr[i];
    }
    return curr_sum;
}

int main(int argc, char *argv[])
{
    /*Check input parameter
     */
    if (argc < 2)
    {
        printf("Usage:%s <num1> <num2> ...\n", argv[0]);
        return 1;
    }

    int n = argc - 1;
    /*storage allocation
     */
    int *arr = (int *)malloc(sizeof(int)* n);
    /*命令输入字符串转换whole num
     */
    for (int i = 0; i < n; ++i)
    {
        arr[i] = atoi(argv[i + 1]);
    }

    /*调用该函数
     */
    int total_sum = get_sum(n , arr);

    /*printf result
     */
    printf("The sum value is:%d\n",total_sum);

    /*free arr
     */
    free(arr);
    arr = NULL;

    return 0;
}

