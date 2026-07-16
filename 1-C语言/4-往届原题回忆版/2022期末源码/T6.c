#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void rotate(int *nums, int nums_size, int k);
int main()
{

    int L = 0; // 定义数组长度;
    int k = 0; // 定义位移长度;
    scanf("%d %d", &L, &k);

    int a[10] = {0}; // 定义及输入数组, 记得初始化均为 0;
    int i = 0;
    for (i = 0; i < L; ++i)
    {
        scanf("%d", &a[i]);
    }

    // 取余操作, 以防输入的 k 太大;

    // k 为正数, 则循环减 L 取余;
    while (k >= L)
    {
        k -= L;
    }

    // k 为负数, 则循环加 L 取余;
    while (k <= -L)
    {
        k += L;
    }

    // k 绝对值在[-L, 0]时, k 效果与 L + k相同;


    if (k > 0)
    {
        rotate(a, L, k);
    }
    else
    {
        rotate(a, L, L + k);
    }

    for (i = 0; i < L; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

// 旋转函数;

void rotate(int *nums, int nums_size, int k)
{
    int temp[10] = {0};
    int i = 0;
    for (i = 0; i < nums_size; ++i)
    {
        // 移位取余;
        temp[(i + k) % nums_size] = nums[i];
    }
    for (i = 0; i < nums_size; ++i)
    {
        nums[i] = temp[i];
    }
}
