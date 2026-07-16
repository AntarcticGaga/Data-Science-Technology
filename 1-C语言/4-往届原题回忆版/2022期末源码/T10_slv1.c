#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N = 0;
    scanf("%d", &N);
    int a[10000] = {0};
    int i = 0;
    for (i = 0; i < N; ++i)
    {
        scanf("%d", &a[i]);
    }

    int j = 0;
    int t = 0;
    int cnt_cnt = 0;

    for (i = 0; i < (N - 1); ++i)
    {
        for (j = 0; j < (N - 1) - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                cnt_cnt++;
            }
        }
    }
    printf("%d", cnt_cnt);

    return 0;
}
