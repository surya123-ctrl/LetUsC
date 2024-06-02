#include <stdio.h>
#include <math.h>

void calculateArea(int a, int b, int c, float *area) {
    float s = (a + b + c) / 2.0; // Cast to float to ensure proper division
    *area = sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int a, b, c;
    float area = 0.0;
    printf("Enter sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        calculateArea(a, b, c, &area);
        printf("Area: %f\n", area);
    } else {
        printf("The entered sides do not form a valid triangle.\n");
    }
    return 0;
}
