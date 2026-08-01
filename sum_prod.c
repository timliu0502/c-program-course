#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    // 检查命令行参数个数
    if (argc < 2) 
    {
        printf("init error!\n");
        return 1;
    }

    int length = argc - 1;
    int arr[length];

    // 将命令行传入的字符串参数转换为整数并存入数组
    for (int i = 0; i < argc - 1; ++i) 
    {
        arr[i] = atoi(argv[i + 1]);
    }

    // 提示用户输入一个整数 b
    int b;
    printf("Please input an integer: ");
    int s = scanf("%d", &b);

    // 检查输入是否有效
    if (s != 1) 
    {
        printf("wrong input!\n");
        return 1;
    }

    // 计算数组中所有元素的和
    int sum = 0;
    for (int i = 0; i < length; ++i) 
    {
        sum = sum + arr[i];
    }

    // 计算乘积并输出结果
    int answer = sum * b;
    printf("%d * %d = %d\n", sum, b, answer);

    return 0;
}
