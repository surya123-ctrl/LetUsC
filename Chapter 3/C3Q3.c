#include <stdio.h>
int main()
{
    int year = 0;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 400 == 0)
        printf("Leap Year");
    else if (year % 100 == 0)
        printf("Not a leap year");
    else if (year % 4 == 0)
        printf("Leap Year");
    else
        printf("Not a leap year");
    return 0;
}