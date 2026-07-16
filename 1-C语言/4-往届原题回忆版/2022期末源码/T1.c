// 这段代码是一个简单的C语言程序。程序首先定义了一个变量x并初始化为77，

// 然后通过gets函数获取用户输入的字符串保存在shuru数组中。

// 接下来，程序使用一个循环遍历输入字符串的每个字符。如果字符是'V'，则将变量x乘以2；

// 否则，将变量x减去54.5。如果x小于等于0，程序会跳转到标签"label"处，将x置为0。

// 最后，程序使用printf函数输出x的值，并保留一位小数。

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x = 77;
    char shuru[100] = {'\0'};
    gets(shuru);
    int i = 0;
    for (i = 0; shuru[i] != '\0'; ++i)
    {
        if (shuru[i] == 'V')
        {
            x = x * 2;
        }
        else
        {

            x = x - 54.5;
            if (x <= 0)
            {
                x = 0;
                goto label;
            }
        }
    }
label:
    printf("%.1f", x);

    return 0;
}
