#include <stdio.h>

int a[10010];
int t[10010];
int cnt, n;
int main()
{
    int i = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        t[a[i]] = i; // 记录位置
    }

    printf("排序前\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }

    for (i = 1; i <= n; i++)
    {
        if (a[i] != i)
        {
            int d = t[i];   // 找到i上边应该放的数字的位置
            int tmp = a[i]; // 将其交换回来
            a[i] = a[d];
            a[d] = tmp;
            cnt++; // 记录交换次数
        }
    }

    printf("排序后\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("%d\n", cnt);
    return 0;
}
