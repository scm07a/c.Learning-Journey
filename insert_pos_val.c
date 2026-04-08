#include <stdio.h>

int main()
{
    int pos, arr[100], size, new_value;
    printf("Enter Array Size:");
    scanf("%d", &size);
    printf("Enter Array Values:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\nEnter Position Of New Value:");
    scanf("%d", &pos);
    printf("Enter New Value:");
    scanf("%d", &new_value);
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = new_value;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}