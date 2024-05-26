#include<stdio.h>
#include<math.h>
int main() {
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
     float sum = 0.0;
    float term = (float)(x - 1) / x; // Calculate the common ratio once
    for(int i = 1; i <= 7; i++) {
        if (i == 1) {
            sum += term; // First term: (x - 1) / x
        } else {
            sum += 0.5 * pow(term, i); // Subsequent terms: 0.5 * (term^i)
        }
    }
    printf("Sum: %f", sum);
    return 0;
}