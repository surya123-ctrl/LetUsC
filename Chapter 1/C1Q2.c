#include <stdio.h>
int main()
{
    float kilometer = 0.0;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometer);
    float meter = kilometer * 1000;
    float centimeter = meter * 100;
    float feet = 3.28084 * meter;
    float inch = 12 * feet;
    printf("Distance in meter : %f\n", meter);
    printf("Distance in centimeter : %f\n", centimeter);
    printf("Distance in feet : %f\n", feet);
    printf("Distance in inch : %f\n", inch);
    return 0;
}