#include<stdio.h>
void rotate(int *x, int *y, int *z) {
    int temp = *x;
    *x = *z;
    *z = *y;
    *y = temp;
}
int main() {
    int x, y, z;
    printf("Enter values: ");
    scanf("%d %d %d", &x, &y, &z);
    rotate(&x, &y, &z);
    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Z: %d", z);
    return 0;
}