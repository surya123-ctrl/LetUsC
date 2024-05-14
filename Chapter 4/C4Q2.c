#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    (year % 400 == 0) ? printf("Leap Year") : (year % 100 == 0) ? printf("Not a Leap Year")
                                          : (year % 4 == 0)     ? printf("Leap Year")
                                                                : printf("Not a Leap Year");
    return 0;
}