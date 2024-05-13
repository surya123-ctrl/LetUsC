#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter first point : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter second point : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter third point : ");
    scanf("%d %d", &x3, &y3);
    if ((y2 - y1) / (x2 - x1) == (y3 - y1) / (x3 - x1))
        printf("Straight Line");
    else
        printf("Not a straight line.");
    return 0;
}