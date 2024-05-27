#include<stdio.h>

void prime(int);

int main() {
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);
    prime(num);
    return 0;
}

void prime(int n) {
    int i, j, isPrime;
    for(i = 2; i <= n; i++) {
        isPrime = 1;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d\n", i);
        }
    }
}
