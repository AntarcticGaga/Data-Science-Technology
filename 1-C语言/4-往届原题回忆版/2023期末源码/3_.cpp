// 两个小朋友玩整数取反的游戏，一个小朋友先告诉有几个整数需要取反，
// 之后每说出一个整数另外一个小朋友马上给出它的反顺序整数。

#include <stdio.h>

int main()
{
    int n, num, i;
    int a[100] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", int_reverse(a[i]));
    }

    return 0;
}

int int_reverse(int num)
{
    int rev_num = 0;
    while (num != 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    return rev_num;
}