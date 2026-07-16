#include <stdio.h>
#include <math.h>
int main()
{
    int nums[5] = {0};

    int i = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    int min_num = nums[0];
    int max_num = nums[0];
    int n;
    int num_after;
    double aver;

    for (i = 0; i < 5; i++)
    {
        if (min_num > nums[i])
        {
            min_num = nums[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (max_num < nums[i])
        {
            max_num = nums[i];
        }
    }

    aver = (1.0 * min_num + 1.0 * max_num) / 2;

    num_after = ceil(aver);

    n = num_after - min_num;

    printf("%d ", min_num);
    printf("%d ", max_num);
    printf("%d ", n);
    printf("%d ", num_after);

    return 0;
}