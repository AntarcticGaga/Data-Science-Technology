/* 从键盘输入 x 的值，并用以下的公式计算 sum 的值，要求最后一项的绝对值小于
1e-8。公式为：sinx = x - x^3/3! + x^5/5! - x^7/7…  */
#include <stdio.h>
#include <math.h>
// 求阶乘
double factorial(int n)
{
    // 递归求阶乘
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

/*

循环法求阶乘
#include <stdio.h>
int main()
{
    int i,n;
    double sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum*i;
    printf("%d!=%lf",n,sum);
    printf("\n");
    return 0;
}


*/



int main()
{
    double x;
    scanf("%lf", &x);
    // 最终求得结果
    double sum = 0;
    // num1是每一项的值，num2是每次
    double num1 = 1;
    int i = 1;
    while (num1 >= 1e-8)
    {
        // pow()函数：求x的n次方
        num1 = pow(x, 2 * i - 1) / factorial(2 * i - 1);
        // 奇数次项累加，偶数次项累减
        if (i % 2)
        {
            sum += num1;
        }
        else
        {
            sum -= num1;
        }
        i++;
    }
    printf("%f\n", sum);
    return 0;
}