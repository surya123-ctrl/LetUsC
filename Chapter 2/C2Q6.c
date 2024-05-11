#include <stdio.h>
#include <math.h>
int main()
{
    float temperature, velocity;
    printf("Enter the current temperature and velocity : ");
    scanf("%f %f", &temperature, &velocity);
    float windChillFactor = 35.74 + (0.6215 * temperature) + ((0.4275 * temperature) - 35.75) * pow(velocity, 0.16);
    printf("Wind Chill Factor : %f", windChillFactor);
    return 0;
}