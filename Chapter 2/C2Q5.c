#include <stdio.h>
#include <math.h>
int main()
{
    float l1, l2, g1, g2;
    printf("Enter latitude l1 & l2 : ");
    scanf("%f %f", &l1, &l2);
    printf("Enter longitude g1 & g2 : ");
    scanf("%f %f", &g1, &g2);
    float d = 3963 * acos((sin(l1) * sin(l2)) + (cos(l1) * cos(l2) * cos(g2 - g1)));
    printf("\nDistance between the two points : %f", d);

    return 0;
}