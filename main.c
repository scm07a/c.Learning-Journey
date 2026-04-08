// TODO:Remember to actually implement highest grade...
#include <stdio.h>
// int high_grade(int grades[5][2]);
int main()
{
    int id[5], grade[5], grades[5][2];
    printf("Enter The Id and Grade:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d", &id[i], &grade[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        grades[i][0] = id[i];
        grades[i][1] = grade[i];
    }
    for (int i = 0; i < 5; i++)
        printf("Parallel Array:%d %d\n", id[i], grade[i]);
    printf("2D Array:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }
    return 0;
}