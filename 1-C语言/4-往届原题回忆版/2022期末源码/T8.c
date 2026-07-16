
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // 至少有三个元素才会出现折点;
    if (n <= 2)
        printf("0");
    else
    {
        int a[1001];

        int i;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
        int count = 0; // 记录折点数
        for (i = 1; i < n - 1; i++)
        {
            if ((a[i + 1] > a[i] & a[i - 1] > a[i]) || (a[i + 1] < a[i] & a[i - 1] < a[i]))
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
