#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Press 1 for Factorial\n");
    printf("Press 2 for Prime or not\n");
    printf("Press 3 for Odd or even\n");
    printf("Press 4 for Exit\n");
    int choice, n, fact = 1, p = 0;
    scanf("%d", &choice);
    switch(choice) {

        case 1:
            printf("Enter a number: ");
            scanf("%d", &n);
            for(int i=1; i<=n; i++) fact *= i;
            printf("Factorial: %d", fact);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &n);
            for(int i=1; i<=n; i++) {
                if(n % i == 0) p ++;
            }
            p == 2 ? printf("Prime Number"): printf("Not a prime number.");
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &n);
            n % 2 == 0 ? printf("Even Number.") : printf("Odd Number");
            break;
        case 4:
            exit(1);
            break;
    }
    return 0;
}