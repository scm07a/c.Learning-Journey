#include <stdio.h>

int main()
{
    int lim1, lim2, arr[] = {1, 2, 3, 4, 5, 54, 64, 25, 35}, max = arr[0];
    printf("Enter The Beginning Limit:");
    scanf("%d", &lim1);
    printf("Enter The Ending Limit:");
    scanf("%d", &lim2);
    for (int i = lim1; i < lim2; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("The maximum in the sub array is %d", max);
    return 0;
}