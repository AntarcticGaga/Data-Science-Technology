#include <string.h>
#include <stdio.h>

int main()
{
    char str[80] = "This is - www.runoob.com - website";
    const char s[2] = "-";
    char *token = str;

    /* 获取第一个子字符串 */

    /* 继续获取其他的子字符串 */
    while (token != NULL)
    {
        token = strtok(str, s);
        printf("%s\n", token);

    }

    return (0);
}