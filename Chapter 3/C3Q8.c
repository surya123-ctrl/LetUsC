#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n > 0)
        printf("Absolute : %d", n);
    else
        printf("Absolute : %d", -1 * n);
    return 0;
}