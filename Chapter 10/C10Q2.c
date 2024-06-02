#include <stdio.h>

int func(int num);

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);
    
    printf("Prime factors of %d are:\n", number);
    func(number);
    
    return 0;
}

int func(int num) {
    int i;
    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
            func(num / i);
            break;
        }
    }
    return 0;
}
