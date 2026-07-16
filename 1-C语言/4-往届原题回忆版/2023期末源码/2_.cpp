#include <stdio.h>
#include <math.h>
int int_reverse(int num);
void Rev_prime(int n);
int is_prime_num_sqrt(int n);
//StudybarCommentBegin
int main()
{
    int n;
    scanf("%d", &n);
    Rev_prime(n);
    return 0;
}
//StudybarCommentEnd

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

void Rev_prime(int n)
{
    int flag_num = 0;

    int i;
    for (i = 100; i <= n; i++)
    {
        flag_num = int_reverse(i);
        if (is_prime_num_sqrt(i) && (is_prime_num_sqrt(flag_num)))
        {
            printf("%d\n", i);
        }
    }
}