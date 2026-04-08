#include <stdio.h>

int main()
{
    int freq_num[100][2], size, count;
    printf("Enter size of the array:");
    scanf("%d", &size);
    // printf("Enter size of column:");
    // scanf("%d",&c);
    printf("Enter Values of array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &freq_num[i][0]);
    }
    for (int i = 0; i < size; i++)
    {
        freq_num[i][1] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (freq_num[i][0] == freq_num[j][0])
            {
                count++;
                freq_num[j][1] = -1;
            }
        }
        if (freq_num[i][1] != -1)
        {
            freq_num[i][1] = count;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (freq_num[i][1] != -1)
            printf("%d occurs %d times !\n", freq_num[i][0], freq_num[i][1]);
    }
    return 0;
}