#include<stdio.h>
#include<math.h>
void calculateArea(int a, int b, int c, float *area) {
    float s = (a + b + c) / 2.0;
    *area = sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    int a, b, c;
    float area = 0.0;
    printf("Enter side of triangles: ");
    scanf("%d %d %d", &a, &b, &c);
    calculateArea(a, b, c, &area);
    printf("Area: %f", area);
    return 0;
}