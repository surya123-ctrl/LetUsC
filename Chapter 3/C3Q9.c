#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter length : ");
    scanf("%d", &length);
    printf("Enter breadth : ");
    scanf("%d", &breadth);
    if (2 * (length + breadth) > length * breadth)
        printf("Perimeter is greater than area");
    else
        printf("Area is greater than area");
    return 0;
}