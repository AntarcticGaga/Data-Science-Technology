// 不知道数组长度 n 时可以使用的一种方法;

#include <stdio.h>
int main()
{
    int count = 0;
    int a[1024] = {0};

    while (1)
    {
        scanf("%d", &a[count]); /*这里其实有个bug,如果你输入的是一个空
          数组，即直接回车的话程序会卡在这里,因为scanf需要接收到一个整型数据*/
        count++;
        if (getchar() == '\n') // 遇到换行时跳出循环
        {
            break;
        }
    }

    int temp;
    for (temp = 0; temp < count; temp++) // 打印结果
    {
        printf("%d ", a[temp]);
    }
    
    printf("\n%d", count);

    return 0;
}
