#include <stdio.h>
int main()
{
    float sal;
    printf("Enter your Salary: ");
    scanf("%f", &sal);
    (sal >= 25000 && sal <= 40000) ? printf("Manager \n") : (sal >= 15000 && sal < 25000) ? printf("Accountant")
                                                                                          : printf("Clerk");
    return 0;
}