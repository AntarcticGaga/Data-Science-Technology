
//StudybarCommentBegin
#include <string.h>
#include <stdio.h>
int CountSubstr( char *s1, char *s2 );

int main()
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("%d", CountSubstr(s1, s2));
}
//StudybarCommentEnd

int CountSubstr(char *s1,char *s2)
{
    int count = 0, i, j;
    for (i = 0; i < strlen(s1); i++) {
        for (j = 0; j < strlen(s2); j++) {
            if(s1[i + j] != s2[j]) {
                break; // 出现了不同字符就退出循环
            }
        }
        if (j == strlen(s2)) {
            count++; // 退出循环后若j的值等于子串的长度，则存在子串
        }
    }
    return count;
}
