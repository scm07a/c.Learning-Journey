#include <stdio.h>
#include <math.h>

int main(void)
{
    double std_dev, x_ini[10], x_avg, sum_x = 0, sum_ini = 0;
    int n;
    printf("Enter How Many Numbers You Want To Calculate[10 Nums Max]:");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Invalid Input");
        return 0;
    }

    printf("Enter The Numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &x_ini[i]);
        sum_x += x_ini[i];
    }
    x_avg = sum_x / (float)n;
    for (int i = 0; i < n; i++)
    {
        sum_ini += pow(x_ini[i] - x_avg, 2);
    }
    double variance = sum_ini / (float)n;
    std_dev = sqrt(variance);
    printf("The Standard Deviation Of Your Group Of Numbers is %.2f", std_dev);

    return 0;
}