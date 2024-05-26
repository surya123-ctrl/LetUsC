#include <stdio.h>

int main() {
    int num, r, c, sp, i = 1;
    
    // Prompt the user for input
    printf("Enter any number: ");
    scanf("%d", &num);

    // Loop through each row
    for (r = 1; r <= num; r++) {
        // Print leading spaces
        for (sp = 1; sp <= num - r; sp++) {
            printf(" ");
        }

        // Print the numbers in the current row
        for (c = 1; c <= r; c++, i++) {
            printf("%d ", i);
        }
        
        // Move to the next line after finishing the current row
        printf("\n");
    }

    return 0;
}
