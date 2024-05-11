#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    int temp = x + y; // 5, 10 -> 15
    x = temp - x;
    y = temp - y;
    printf("\nAfter swapping values of x and y : %d %d", x, y);
    return 0;
}