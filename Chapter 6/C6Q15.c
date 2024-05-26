#include <stdio.h>

int main() {
    int rows, coef = 1, space, i, j;

    // Prompt user for the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    for (i = 0; i < rows; i++) {
        // Print leading spaces for proper formatting
        for (space = 1; space <= rows - i; space++)
            printf("  ");

        // Calculate and print binomial coefficients for the current row
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            // Print the coefficient with width 4 for alignment
            printf("%4d", coef);
        }

        // Move to the next line after completing the current row
        printf("\n");
    }

    return 0;
}
