#include <stdio.h>
void main()
{
    int n, reversed = 0;
    printf("Enter The Number:");
    scanf("%d", &n);
    int original = n;
    while (n != 0)
    {
        int remainder = n % 10;               // Gets Last Digit
        reversed = reversed * 10 + remainder; // Builds The Reversed Number, through Each Loop Iteration.
        n /= 10;                              // Resets and removes the last digit
    }
    if (original == reversed)
        printf("%d Is Palindrome!", original);
    else
        printf("%d Is Not Palindrome!", original);
}