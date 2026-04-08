#include <stdio.h>
int main()
{
    int arr1[10],
        freq[10],
        count = 0,
        size;
    printf("Enter Size Of The Array:");
    scanf("%d", &size);
    printf("Enter The Elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
        freq[i] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr1[i] == arr1[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
            freq[i] = count;
    }
    printf("The Frequency Of Each Element Is The Following:\n");
    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
            printf("%d is repeated %d times!\n", arr1[i], freq[i]);
    }
    return 0;
}