#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b, cd;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Calculate the GCD
    cd = gcd(a, b);

    printf("Greatest common divisor of the given numbers is %d\n", cd);

    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
