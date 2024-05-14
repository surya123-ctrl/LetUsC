#include <stdio.h>
#include <math.h>
int main()
{
    int angle = 0;
    printf("Enter the value of angle: ");
    scanf("%d", &angle);
    angle = 0.0174533 * angle;
    if (pow(sin(angle), 2) + pow(cos(angle), 2) == 1)
        printf("sin^2(angle) + cos^2(angle) == 1");
    else
        printf("False");
    return 0;
}