#include <stdio.h>
int main()
{
    int n, n100, n50, n10, n5, n2, n1;
    printf("Enter amount : ");
    scanf("%d", &n);
    int count = 0;
    n100 = n / 100;
    n %= 100;
    n50 = n / 50;
    n %= 50;
    n10 = n / 10;
    n %= 10;
    n5 = n / 5;
    n %= 5;
    n2 = n / 2;
    n %= 2;
    n1 = n / 1;
    printf("100 Notes : %d\n", n100);
    printf("50 Notes : %d\n", n50);
    printf("10 Notes : %d\n", n10);
    printf("5 Notes : %d\n", n5);
    printf("2 Notes : %d\n", n2);
    printf("1 Notes : %d\n", n1);
    return 0;
}