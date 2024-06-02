#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main() {
    int x1, x2, x3, y1, y2, y3, x, y;
    float A1, A2, A3, A;

    printf("Enter the coordinates of the first point of the triangle: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the coordinates of the second point of the triangle: ");
    scanf("%d%d", &x2, &y2);
    printf("Enter the coordinates of the third point of the triangle: ");
    scanf("%d%d", &x3, &y3);
    printf("Enter the point to check its position: ");
    scanf("%d%d", &x, &y);

    A1 = area(x1, y1, x2, y2, x, y);
    A2 = area(x1, y1, x3, y3, x, y);
    A3 = area(x, y, x2, y2, x3, y3);
    A = area(x1, y1, x2, y2, x3, y3);

    printf("A1: %f\n", A1);
    printf("A2: %f\n", A2);
    printf("A3: %f\n", A3);
    printf("A: %f\n", A);

    if (fabs((A1 + A2 + A3) - A) < 0.00001)
        printf("The point (%d, %d) lies inside the triangle.\n", x, y);
    else
        printf("The point (%d, %d) lies outside the triangle.\n", x, y);

    return 0;
}

float distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    float a = distance(x1, y1, x2, y2);
    float b = distance(x1, y1, x3, y3);
    float c = distance(x2, y2, x3, y3);
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
