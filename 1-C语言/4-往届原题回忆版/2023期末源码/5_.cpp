/*
一组由0和1组成的数字串，对其进行加密处理。加密方法是：
将原数字串中的1变成10，0变成01，加密次数不限。

例如：数字串1，第1次加密后为10，第2次加密后为1001，

第3次加密后为10010110……以此类推。

反之，若已知加密后数字串为10010110，则加密前原数字串为1。
输入：
一组由0和1组成的数字串。
输出
加密前原数字串的十进制数。

如果数字串长度为奇数，或者两两一对的数字串出现00或11的情况，则这个数字串就是原数字串。

输入

10010110

输出

1

输入

100110

输出

5
*/
// 思路：
// 1. 检查输入字符串的长度偶数还是奇数；
// 3. 如果字符串不符合加密规则（即包含 "00" 或 "11"），原始字符串，二进制转换为十进制。
// 4. 如果字符串符合加密规则，调用解密；

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_jia_mi(char *str);
void jie_mi(char *str, char *res);

int main()
{
    char input_str[10000], res[10000];

    scanf("%s", input_str);

    // 循环直到解密成功；
    while (str_jia_mi(input_str))
    {
        jie_mi(input_str, res);
        strcpy(input_str, res);
    }

    int answer_num = strtol(input_str, NULL, 2);

    printf("%d\n", answer_num);

    return 0;
}

int str_jia_mi(char *str)
{
    int str_length = strlen(str);

    // 长度奇数，直接转换；
    if (str_length % 2 != 0)
        return 0;

    int i = 0;
    for (i = 0; i < str_length; i += 2)
    {
        if (strncmp(&str[i], "10", 2) != 0 && strncmp(&str[i], "01", 2) != 0)
        {

            return 0;
        }
    }
    // 发现 00和11；
    return 1;
}

void jie_mi(char *str, char *res)
{

    int str_length = strlen(str);

    int i = 0;
    int j = 0;
    for (i = 0, j = 0; i < str_length; i += 2, j++)
    {
        if (strncmp(&str[i], "10", 2) == 0)
        {
            res[j] = '1';
        }
        else
        {
            res[j] = '0';
        }
    }
    res[str_length / 2] = '\0'; // 添加字符串结束符
}
