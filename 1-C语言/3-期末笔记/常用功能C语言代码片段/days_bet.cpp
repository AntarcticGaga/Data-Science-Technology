#include <stdio.h>

int daysBetweenDates(int y1, int m1, int d1, int y2, int m2, int d2);

int main()
{
    int y1, m1, d1, y2, m2, d2, res;
    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2); // 修正此行，应该读取到 y2, m2, d2
    res = daysBetweenDates(y1, m1, d1, y2, m2, d2);
    printf("%d", res);
    return 0;
}

int daysBetweenDates(int y1, int m1, int d1, int y2, int m2, int d2)
{
    int days_in_y1 = 0;
    int days_in_y2 = 0;
    int days_to_y1 = 0;
    int days_y_bet = 0;
    int res = 0;
    int count = 0;

    int days_of_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 计算days_in_y1;
    int i = 0;
    for (i = 0; i < m1; i++) // 修正此行，应该从1开始，不包括1月
    {
        days_in_y1 += days_of_month[i];
    }

    days_in_y1 += d1;

    if (((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0) && m1 > 2)
    {
        days_in_y1 += 1;
    }

    // 计算days_to_y1;
    for (i = 0; i < m2; i++) // 修正此行，应该从1开始，不包括1月
    {
        days_in_y2 += days_of_month[i];
    }

    days_in_y2 += d2;

    if (((y2 % 4 == 0 && y2 % 100 != 0) || y2 % 400 == 0) && m2 > 2)
    {
        days_in_y2 += 1;
    }

    for (i = y1; i < y2; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            count += 1;
        }
    }

    days_y_bet = 365 * (y2 - y1) + count;

    days_to_y1 = days_y_bet + days_in_y2;

    res = days_to_y1 - days_in_y1;

    return res;
}
