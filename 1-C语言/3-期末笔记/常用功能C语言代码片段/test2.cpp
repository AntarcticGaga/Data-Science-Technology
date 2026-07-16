#include <stdio.h>
#include <string.h>
int main()
{
    char a[5] = "1234";
    char b[5] = "abcd";
    char temp[100] = {'\0'};
    char temp2[100] = {'\0'};

    strncpy(temp, b, 3);

    strcat(temp,a);

    strncpy(temp2, b+3, 3);

    strcat(temp,temp2);

    printf("%s", temp);


}