#include<stdio.h>
int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int sum = 0;
    for(int i=1; i<=7; i++) {
        sum += (i / factorial(i));
    }
    printf("Sum: %d", sum);
    return 0;
}