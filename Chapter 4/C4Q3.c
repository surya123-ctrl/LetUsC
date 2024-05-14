#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 nos : ");
    scanf("%d %d %d", &a, &b, &c);
    (a > b && a > c) ? printf("A is largest") : (b > a && b > c) ? printf("B is largest")
                                                                 : printf("C is largest");
    return 0;
}