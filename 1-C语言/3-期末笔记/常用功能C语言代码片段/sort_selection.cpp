#include <stdio.h>

// 选择排序函数(从小到大)；
void selection_sort_asc(int *arr, int n)
{
    int i, j, min_index, temp;

    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // 交换arr[i]和arr[min_index]
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// 选择排序函数(从大到小)；
// void selection_sort_desc(int *arr, int n)
// {
//     int i, j, max_index, temp;

//     for (i = 0; i < n - 1; i++)
//     {
//         max_index = i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[max_index])
//             { // 注意这里的比较条件
//                 max_index = j;
//             }
//         }
//         // 交换arr[i]和arr[max_index]
//         temp = arr[i];
//         arr[i] = arr[max_index];
//         arr[max_index] = temp;
//     }
// }

int main()
{
    int n;
    printf("请输入数组的大小: ");
    scanf("%d", &n);

    int arr[n];
    printf("请输入整数数组: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 从小到大；
    selection_sort_asc(arr, n);

    printf("排序后的数组: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
