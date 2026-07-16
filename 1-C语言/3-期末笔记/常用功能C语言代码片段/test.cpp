#include <stdio.h>
#include <string.h>

void insert_string(char *s1, char *s2, int n)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len = len1 + len2;

    // 如果n超出了s1的长度，则直接将s2拼接到s1的末尾
    if (n > len1)
    {
        strcat(s1, s2);
    }
    else
    {
        // 将s2插入到s1的n位置
        char temp[100];
        strncpy(temp, s1 + n, len1 - n); // 备份n位置后的字符
        strcpy(s1 + n, s2);              // 将s2插入到n位置
        strcpy(s1 + n + len2, temp);     // 恢复备份的字符
    }
}

int main()
{
    char s1[100] = "Hello, World!";
    char s2[] = "beautiful";
    int n = 7;

    printf("插入前：\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    insert_string(s1, s2, n-2);

    printf("插入后：\n");
    printf("s1: %s\n", s1);

    return 0;
}
