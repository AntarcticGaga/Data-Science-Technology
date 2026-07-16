#include <stdio.h>

// 冒泡排序函数;
void bubble_sort(int *arr, int n)
{
    int i, j, temp;

    // 外层循环控制每次冒泡
    for (i = 0; i < n - 1; i++)
    {
        // 内层循环控制每次比较相邻的两个数
        for (j = 0; j < n - 1 - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            { // 如果前一个数比后一个数大，交换它们的位置, 从大到小只需要改变 <.
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;

                // count += 1; 以计数;
            }
        }
    }
}

int main()
{

    // int arr[] = {34, 12, 19, 77, 42, 56};

    // 用数组总字节 / 数组中元素字节, 以得到元素个数;
    // int n = sizeof(arr) / sizeof(arr[0]);

    // 一般而言, 输入数组时是一定要知道长度的, 除非使用链表,或者其他方法;

    int n;
    printf("请输入数组的大小: ");
    scanf("%d", &n);

    int arr[n];
    printf("请输入整数数组: ");

    // 用循环输入整数, 空格间隔, 回车结束;
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("排序前：");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, n);

    printf("排序后：");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
