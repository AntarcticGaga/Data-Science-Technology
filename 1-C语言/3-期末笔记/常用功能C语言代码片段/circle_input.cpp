
int n, c, i;
int price[100];
scanf("%d %d", &n, &c);
for (i = 0; i < n; i++)
    scanf("%d", &price[i]);

int i = 0;
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
    scanf("%d", &a[i]);
    t[a[i]] = i; // 记录位置
}