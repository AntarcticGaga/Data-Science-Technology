/*
已知由一些字母组成的两个字符串序列A和B，
其中A字符串序列是首尾相接构成环，编写程序检测A字符串序列是否在B字符串序列中出现过，以及出现的次数。
以A字符串序列 pmm为例，首尾相接构成环如下图所示，可构成 pmm、mpm、mmp三个字符串。
例如，假设A字符串序列为pmm，B字符串序列为mmmpppm，则出现过1次；A字符串序列为pmpppm，则未出现过，出现次数为0。

输入

一行，两个字符串A和B ，以单个空格分隔。

输出

输出字符串A序列中的字符串，是否在字符串B中出现过，出现过 则输出 yes，并输出出现次数，中间以单个空格分隔。

*/

// 旋转A，依次与b比较

#include <stdio.h>
#include <string.h>

int main()
{

    char str_A[1001];
    char str_B[2001];
    scanf("%s %s", str_A, str_B);

    // int lenA = strlen(str_A);
    // int lenB = strlen(str_B);

    int lenA;
    int lenB;

    lenA = strlen(str_A);
    lenB = strlen(str_B);

    int cnt = 0;

    for (int i = 0; i < lenA; i++)
    {
        // 进行 str——A 的旋转
        char temp_str[101];

        strncpy(temp_str, str_A + i, lenA - i);
        strncpy(temp_str + lenA - i, str_A, i);

        temp_str[lenA] = '\0';

        char *index = str_B;
        while ((index = strstr(index, temp_str)) != NULL)
        {
            cnt++;

            index++;
        }
    }

    if (cnt > 0)
    {
        printf("yes %d\n", cnt);
    }
    else
    {
        printf("no 0\n");
    }

    return 0;
}
