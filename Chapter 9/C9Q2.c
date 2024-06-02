#include<stdio.h>
void result(int a, int b, int c, float *average, float *percentage) {
    *average = (a + b + c) / 3.0;
    *percentage = *average * 10;
}
int main() {
    int a, b, c;
    float average, percentage;
    printf("Enter marks of 3 subject: ");
    scanf("%d %d %d", &a, &b, &c);
    result(a, b, c, &average, &percentage);
    printf("Average: %f\n", average);
    printf("Percentage: %f", percentage);
    return 0;
}