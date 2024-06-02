#include <stdio.h>

void fs(int first, int second, int term);

int main() {
    int first = 0, second = 1;
    int total_terms = 25;

    // Print the first two terms
    printf("%d, %d, ", first, second);

    // Print the rest of the terms
    fs(first, second, total_terms - 2); // Subtract 2 because the first two terms are already printed

    return 0;
}

void fs(int first, int second, int term) {
    if (term == 0)
        return;

    int num = first + second;
    printf("%d, ", num);

    fs(second, num, term - 1);
}
