#include <stdio.h>
#include <math.h>

// 平方根法判断素数;
int is_prime_num_sqrt(int n)
{
    if (n <= 1)
    {
        return false;
    }

    int i = 0;
    for (i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return 0; // 不是素数, 返回 0;
        }
    }
    return 1; // 是素数, 返回 1;
}

// 输入整数主程序;
int main()
{
    int n;

    printf("请输入一个整数：");
    scanf("%d", &n);

    if (is_prime_num_sqrt(n))
    {
        printf("%d是素数\n", n);
    }
    else
    {
        printf("%d不是素数\n", n);
    }
    return 0;
}
