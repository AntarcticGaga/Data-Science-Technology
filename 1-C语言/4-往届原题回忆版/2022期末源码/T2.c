// 输入一个数n, 计算1-n中所有素数的乘积

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int prime(int n);
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = n;
    int sum = 1;
    for (i = n; i >= 2; --i) {
        if (prime(i) == 1) {
            sum *= i;
        }
    }

    printf("%d", sum);

    return 0;
}

int prime(int n){
    int bool = 1;
    int i = 0;
    for (i = 2; i <= (int)(sqrt(n)); ++i) {
        if (n % i == 0) {
            bool = 0;
            break;
        }
    }
    return bool;
}