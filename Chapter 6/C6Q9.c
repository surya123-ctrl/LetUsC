#include <stdio.h>

int main() {
    int i, j, k;
    printf("The Pythagorean triplets from 1 to 30 are:\n");
    for (i = 1; i <= 30; i++) {
        for (j = i; j <= 30; j++) {
            for (k = j; k <= 30; k++) {
                if (i * i + j * j == k * k) {
                    printf("%d, %d, %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
