#include <stdio.h>
int main()
{
    float cp = 0.0, sp = 0.0;
    printf("Enter Cost Price : ");
    scanf("%f", &cp);
    printf("Enter Selling Price : ");
    scanf("%f", &sp);
    float profit = 0.0;
    float loss = 0.0;
    if (cp > sp)
        loss = cp - sp;
    else
        profit = sp - cp;
    if (profit)
        printf("Profit : %d", profit);
    else
        printf("Loss : %f", loss);
    return 0;
}