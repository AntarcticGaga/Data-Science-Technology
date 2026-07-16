//int (*cmp)(const void *,const void *);
qsort(*s, n, sizeof(s[0]), cmp);

其中第一个参数s是一个地址，即参与排序的首地址；
n是需要排序的数量；
sizeof(s[0])则是每一个元素占用的空间大小；
指向函数的指针，用于确定排序的顺序。

简单的说：对一个长为1000的数组进行排序时，int a[1000]; 

qsort(a, 1000, sizeof(int), cmp);
//其中cmp函数应写为：
int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b; //由小到大排序
    //return *(int *)b - *(int *)a; 由大到小排序
}

// int型数组
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int s[10000], n, i;

int cmp(const void *a, const void *b)
{
     return (*(int *)a - *(int *)b);
}

int main()
{
     scanf("%d", &n);
     for(i = 0; i < n; i++) 
         scanf("%d", &s[i]);

     qsort(s, n, sizeof(s[0]), cmp);

     for(i = 0; i < n; i++) 
         printf("%d ", s[i]);

     return 0;
}

// double型
#include <stdio.h>
#include <stdlib.h>
double s[1000];
int i, n;

int cmp(const void * a, const void * b)
{
     return((*(double*)a - *(double*)b>0)?1:-1);
}

int main()
{
     scanf("%d", &n);
     for(i = 0; i < n; i++) 
         scanf("%lf", &s[i]);

     qsort(s, n, sizeof(s[0]), cmp);

     for(i = 0; i < n; i++) 
         printf("%lf ", s[i]);

     return 0;
}

// char型
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char s[10000], i, n;
int cmp(const void *a,const void *b)
{
     return (*(char *)a - *(char *)b);
}

int main()
{
     scanf("%s", s);
     n = strlen(s);
     qsort(s, n, sizeof(s[0]), cmp);

     printf("%s", s);
     return(0);
}

// 对字符串数组排序(char *s[]型)。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *s[100];
int i, n;
int cmp(const void *a, const void *b)
{
     return (strcmp(*(char**)a, *(char**)b));
}

int main()
{
     scanf("%d", &n);
     for(i = 0; i < n; i++)
     {
         s[i] = (char*)malloc(sizeof(char*));
         scanf("%s", s[i]);
     }
     qsort(s, n, sizeof(s[0]), cmp);
     for(i = 0; i < n; i++) 
         printf("%s\n", s[i]);
     return 0;
}