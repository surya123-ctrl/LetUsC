#include <stdio.h>

int calculateSum(int n) {
    if (n == 0) return 0;
    return (n % 10) + calculateSum(n / 10);
}

int main() {
    int n;
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

    int sum = calculateSum(n);
    printf("Sum: %d\n", sum);

    return 0;
}
