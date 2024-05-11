#include <stdio.h>
#define PI 3.14
int main()
{
    printf("Enter length and breadth of rectangle : ");
    float length, breadth;
    scanf("%f %f", &length, &breadth);
    printf("Enter radius of circle : ");
    float radius;
    scanf("%f", &radius);
    printf("Area of rectangle : %f\n", length * breadth);
    printf("Perimeter of rectangle : %f\n", 2 * (length + breadth));
    printf("Area of circle : %f\n", PI * radius * radius);
    printf("Circumference of circle : %f\n", 2 * PI * radius);
    return 0;
}