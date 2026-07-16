strcmp(str1, str2)
// 如果返回值小于 0，则表示 str1 小于 str2。
// 如果返回值大于 0，则表示 str1 大于 str2。
// 如果返回值等于 0，则表示 str1 等于 str2。

strcat()
#include <stdio.h>
#include <string.h>
 
int main ()
{
   char src[50], dest[50];
 
   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");
 
   strcat(dest, src);
 
   printf("最终的目标字符串： |%s|", dest);
   
   return(0);
}

strncat()

strcpy()

strncpy()

strlen()