#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n % 2)
        printf("Odd Number");
    else
        printf("Even Number");
    return 0;
}