#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Bubble_Sort(int *a, int len);

int main()
{
    char a[200] = {'\0'};
    char s[6] = {'?', '!', ',', '.', ':', ';'};
    gets(a);
    int cnt[6] = {0};

    int i = 0;
    for (i = 0; a[i] != '\0'; ++i)
    {
        if (a[i] == '?')
        {
            cnt[0]++;
        }
        else if (a[i] == '!')
        {
            cnt[1]++;
        }
        else if (a[i] == ',')
        {
            cnt[2]++;
        }
        else if (a[i] == '.')
        {
            cnt[3]++;
        }
        else if (a[i] == ':')
        {
            cnt[4]++;
        }
        else if (a[i] == ';')
        {
            cnt[5]++;
        }
    }
    int b[6] = {0};
    int j = 0;
    for (j = 0; j < 6; ++j)
    {
        b[j] = cnt[j];
    }

    Bubble_Sort(b, 6);
    for (i = 0; i < 6; ++i)
    {
        if (cnt[i] == b[5])
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}

// 接收指针，以数组的名字 b 作为地址参数传入；

void Bubble_Sort(int *a, int len)
{
    int i = 0;
    int j = 0;
    int t = 0;

    for (i = 0; i < (len - 1); ++i)
    {
        for (j = 0; j < (len - 1) - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}