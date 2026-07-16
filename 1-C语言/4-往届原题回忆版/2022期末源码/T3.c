#include <stdio.h>

int LeapYear(int year);

int main()
{
    int year, month, day;
    int sum = 0;
    scanf("%d%d%d", &year, &month, &day);
    if (month > 12){
        printf("data error.");
        return 1;
    } else{
        int rly = LeapYear(year);
        if (rly == 0){
            switch (month) {
                case 1:
                    if (day <= 31){
                        sum = 0;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 2:
                    if (day <= 28){
                        sum = 31;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 3:
                    if (day <= 31){
                        sum = 59;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 4:
                    if (day <= 30){
                        sum = 90;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 5:
                    if (day <= 31){
                        sum = 120;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 6:
                    if (day <= 30){
                        sum = 151;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 7:
                    if (day <= 31){
                        sum = 181;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 8:
                    if (day <= 31){
                        sum = 212;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 9:
                    if (day <= 30){
                        sum = 243;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 10:
                    if (day <= 31){
                        sum = 273;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 11:
                    if (day <= 30){
                        sum = 304;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 12:
                    if (day <= 31){
                        sum = 334;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                default:
                    break;
            }
        } else{
            switch (month) {
                case 1:
                    if (day <= 31){
                        sum = 0;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 2:
                    if (day <= 29){
                        sum = 31;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 3:
                    if (day <= 31){
                        sum = 60;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 4:
                    if (day <= 30){
                        sum = 91;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 5:
                    if (day <= 31){
                        sum = 121;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 6:
                    if (day <= 30){
                        sum = 152;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 7:
                    if (day <= 31){
                        sum = 182;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 8:
                    if (day <= 31){
                        sum = 213;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 9:
                    if (day <= 30){
                        sum = 244;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 10:
                    if (day <= 31){
                        sum = 274;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 11:
                    if (day <= 30){
                        sum = 305;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                case 12:
                    if (day <= 31){
                        sum = 335;
                    } else{
                        printf("data error.");
                        return 1;
                    }
                    break;
                default:
                    break;
            }
        }
    }
    int j = 0;
    int days = sum + day;
    int sum_days = days;
    if (year == 2000) {
        sum_days = days;
    } else {
        for (j = year - 1; j >= 2000; --j) {
            if (LeapYear(j) == 1) {
                sum_days += 366;
            } else{
                sum_days += 365;
            }
        }

    }
    int flag = (sum_days + 5) % 7;
    int week = 0;

    switch (flag)
    {   case  0:  week=7;  break;
        case  1:  week=1;  break;
        case  2:  week=2;  break;
        case  3:  week=3;  break;
        case  4:  week=4;  break;
        case  5:  week=5;  break;
        case  6:  week=6;  break;
    }
    printf("%d", week);

    return 0;
}

int LeapYear(int year){
    int res = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        res = 1;
    }
    return res;
}

