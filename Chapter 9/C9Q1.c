#include<stdio.h>
#include<math.h>
void calculate(int a, int b, int c, int d, int e, int *sum, float *average, float *standardDeviation) {
    *sum = a + b + c + d + e;
    *average = *sum / 5;
    *standardDeviation = pow(a - *average, 2) + pow(b - *average, 2) + pow(c - *average, 2) + pow(d - *average, 2) + pow(e - *average, 2);
    *standardDeviation = sqrt(*standardDeviation / 5);
}
int main() {
    int a, b, c, d, e, sum = 0;
    float average = 0.0, standardDeviation = 0.0;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    calculate(a, b, c, d, e, &sum, &average, &standardDeviation);
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", average);
    printf("Standard Deviation: %f\n", standardDeviation);
    return 0;
}