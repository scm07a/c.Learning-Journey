#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter Elements:");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[5 - 1 - i];
        arr[5 - 1 - i] = temp;
    }
    printf("The Reversed Array Is:");
    for (int i = 0; i < 5; i++)
        printf(" %d", arr[i]);
}