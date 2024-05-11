#include <stdio.h>
int main()
{
    float f = 0.0;
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &f);
    float c = (f - 32) / 1.8;
    printf("Temperature in Celsius : %f", c);
    return 0;
}