#include <stdio.h>
#include <math.h>
int main()
{
    float angle;
    printf("Enter the value of angle : ");
    scanf("%f", &angle);
    printf("Sine of angle : %f\n", sin(angle));
    printf("Cosine of angle : %f\n", cos(angle));
    printf("Tan of angle : %f\n", tan(angle));
    printf("Sec of angle : %f\n", atan(angle));
    printf("Cosecant of angle : %f\n", asin(angle));
    printf("Secant of angle : %f\n", acos(angle));
}