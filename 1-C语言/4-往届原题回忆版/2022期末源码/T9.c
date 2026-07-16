
// StudybarCommentBegin
#include <stdio.h>

int main()
{
    int pick_gift(int array[], int n, int c);
    int n, c, i;
    int price[100];
    scanf("%d %d", &n, &c);
    for (i = 0; i < n; i++)
        scanf("%d", &price[i]);
    int max = pick_gift(price, n, c);
    printf("%d", max);
    return 0;
}
// StudybarCommentEnd

int pick_gift(int array[], int n, int c)
{
    int i = 0;

    int j = 0;

    int cnt[100] = {0};

    for (i = 0; i < n; ++i)
    {
        int sum = 0;
        for (j = i; sum <= c; ++j)
        {
            cnt[i]++;
            sum += array[j];
        }
        cnt[i]--;
    }

    int t = 0;

    for (i = 0; i < (100 - 1); ++i)
    {
        for (j = 0; j < (100 - 1) - i; ++j)
        {
            if (cnt[j] > cnt[j + 1])
            {
                t = cnt[j];
                cnt[j] = cnt[j + 1];
                cnt[j + 1] = t;
            }
        }
    }

    return cnt[99];
    
}
