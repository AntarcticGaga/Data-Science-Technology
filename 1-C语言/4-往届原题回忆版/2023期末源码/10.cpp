
#include <stdio.h>

int main()
{
    int F, L, repeats;
    int i, j, k, count = 1;

    // 读取输入
    scanf("%d %d %d", &F, &L, &repeats);

    // 根据输入的因素数和因素的水平数，生成所有可能的水平组合
    for (i = 0; i < repeats; i++)
    {
        for (j = L; j >= 1; j--)
        {
            for (k = F; k >= 1; k--)
            {
                printf("%d_%d", j, count);
                count++;
                if (k > 1 || j > 1)
                {
                    printf("\t");
                }
            }
            if (j > 1)
            {
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}
