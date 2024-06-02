#include <stdio.h>

void bin(int number);

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Binary representation: ");
    bin(number);
    printf("\n");

    return 0;
}

void bin(int number) {
    if (number > 1) {
        bin(number / 2);
    }
    printf("%d", number % 2);
}
