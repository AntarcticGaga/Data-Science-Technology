#include <stdio.h>

// 判断日期合法函数
int is_valid_date(int year, int month, int day)
{
    /*

    基本条件:
    1. 年份大于 0;
    2. 月份在 1 - 12 之间;
    3. 天数应大于等于 1.

    */

    if (year < 0 || month < 1 || month > 12 || day < 1)
    {
        return 0; // 0表示日期不合法
    }

    // 判断月份与天数是否匹配;
    int days_in_month;

    if (month == 2)
    {
        // 判断闰年;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            days_in_month = 29;
        }
        else
        {
            days_in_month = 28;
        }
    }

    // 30 天的月份少;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days_in_month = 30;
    }
    else
    {
        days_in_month = 31;
    }

    // 判断天数是否在对应月份天数内; 
    if (day <= days_in_month)
    {
        return 1; // 1表示日期合法
    }
    else
    {
        return 0; // 0表示日期不合法
    }
}

// 输入日期主函数;
int main()
{
    int year, month, day;
    printf("请输入日期（格式：yyyy mm dd）：");

    scanf("%d %d %d", &year, &month, &day); // 这样输入即可避免补零; 

    if (is_valid_date(year, month, day))
    {
        printf("日期合法。\n");
    }
    else
    {
        printf("日期不合法。\n");
    }

    return 0;
}
