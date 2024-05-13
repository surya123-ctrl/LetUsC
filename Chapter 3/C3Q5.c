#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int rev = 0, temp = num;
    for (int i = temp; i > 0; i = i / 10)
    {
        int c = i % 10;
        rev = rev * 10 + c;
    }
    if (rev == num)
        printf("Same");
    else
        printf("Different");
    return 0;
}