#include <stdio.h>

int sum(int x);

int main() {
    int number, ans;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    ans = sum(number);
    printf("Sum of numbers from 1 to %d is %d\n", number, ans);
    
    return 0;
}

int sum(int x) {
    if (x == 0)
        return 0;
    return x + sum(x - 1);
}
