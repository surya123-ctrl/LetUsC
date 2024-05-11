#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int reverse = 0;
    while (n > 0)
    {
        int c = n % 10;
        reverse = reverse * 10 + c;
        n = n / 10;
    }
    printf("Reverse : %d", reverse);
    return 0;
}