/*
输入一个正整数（不超过9位数），阿拉伯数字，将它的汉语表示输出来，

这种应用在语音播报时经常用。

样例1输入：

2

样例1输出：

二

样例2输入：

500

样例2输出：

五百

样例3输入：

5050

样例3输出：

五千零五十

样例4输入：

9876543

样例4输出：

九百八十七万六千五百四十三

*/

// 思路
// 1. 先创建字符指针数组存储数字到汉字的映射；
// 2. 再创建单位的映射；
// 3. 从最高位开始输出添加单位跟踪0.

#include <stdio.h>
#include <string.h>

char *num_map_Chinese[] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
char *dan_wei[] = {"", "十", "百", "千", "万", "十", "百", "千", "亿"};

void num_to_hanzi(int n);

int main()
{
    int n;
    scanf("%d", &n);

    num_to_hanzi(n);

    return 0;
}

void num_to_hanzi(int n)
{
    // 将输入的数字转换为字符串；
    char str[10];
    sprintf(str, "%d", n);

    // 找数字后面的零；
    int n_length = strlen(str);
    int zero_cnt = 0;

    int i = 0;
    for (i = 0; i < n_length; i++)
    {
        int n = str[i] - '0';
        if (n == 0)
        {
            zero_cnt++;
        }
        else
        {
            if (zero_cnt > 0)
            {
                // 输出单位后面该有的零；

                printf("%s", num_map_Chinese[0]);
                zero_cnt = 0;
            }

            printf("%s", num_map_Chinese[n]);
            if (n_length - i - 1 > 0)
            {
                printf("%s", dan_wei[n_length - i - 1]);
            }
        }
    }

    printf("\n");
}
