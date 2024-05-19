#include<stdio.h>
int main() {
    int n;
    int positive = 0, negative = 0, zero = 0, choice = 1;
    do {
        scanf("%d", &n);
        n > 0 ? positive ++ : n < 0 ? negative ++: zero ++;
        scanf("%d", &choice);
    } while(choice);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);
}