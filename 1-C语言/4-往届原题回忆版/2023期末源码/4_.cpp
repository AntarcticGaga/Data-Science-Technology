/*
随机输入10个整数，将其从小到大排列并输出奇数序号的数字。

样例输入：

 1 3 10 2 6 5 4 9 20 33

样例输出

1 3 5 9 20

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int int_cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int s[10] = {0};

    int i = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &s[i]);

    qsort(s, 10, sizeof(s[10]), int_cmp);

    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 1)
        {
            printf("%d ", s[i]);
        }
    }

    return 0;
}