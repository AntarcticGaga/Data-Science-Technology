#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void input(double *wage, int n);

double calculate(double *wage, int n, double *maxwage, double *minwage);

// StudybarCommentBegin
int main()
{
    double wage[50], maxwage, minwage, avewage;
    int n;
    scanf("%d", &n);
    input(wage, n);
    avewage = calculate(wage, n, &maxwage, &minwage);
    printf("maxwage=%.2f,minwage=%.2f,avewage=%.2f\n", maxwage, minwage, avewage);
    return 0;
}
// StudybarCommentEnd

void input(double *wage, int n)
{
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        scanf("%lf", &wage[i]);
    }
}

double calculate(double *wage, int n, double *maxwage, double *minwage)
{
    double sum = 0;
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        sum += wage[i];
    }
    double avewage = 0;
    avewage = sum / n;

    int j = 0;
    double t = 0;

    for (i = 0; i < (n - 1); ++i)
    {
        for (j = 0; j < (n - 1) - i; ++j)
        {
            if (wage[j] > wage[j + 1])
            {
                t = wage[j];
                wage[j] = wage[j + 1];
                wage[j + 1] = t;
            }
        }
    }

    *maxwage = wage[n - 1];
    *minwage = wage[0];
    return avewage;
}
