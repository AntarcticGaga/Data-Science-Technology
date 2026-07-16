// 输入字符串并遍历；
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

// 循环输入数组
int a[1001];

int i;
for (i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}

// 遍历整数

// 遍历字符串