#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    printf("Enter Cartesian Co-ordinates : ");
    scanf("%f %f", &x, &y);
    float r = sqrt(x * x + y * y);
    float p = atan(y / x);
    printf("Co-ordinates in polar form : %f %f", r, p);
    return 0;
}