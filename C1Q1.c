#include <stdio.h>
int main()
{
    int basic_salary = 0;
    printf("Enter Basic Salary : ");
    scanf("%d", &basic_salary);
    float dearness_allowance = 0.4 * basic_salary;
    float house_rent_allowance = 0.2 * basic_salary;
    float gross_salary = basic_salary + dearness_allowance + house_rent_allowance;
    printf("Gross Salary : %f", gross_salary);
    return 0;
}