#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    float semiPerimeter = (a + b + c) / 2;
    float area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
    printf("Area of triangle : %.2f", area);
    return 0;
}