#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter age of Ram : ");
    scanf("%d", &n1);
    printf("Enter age of Shyam : ");
    scanf("%d", &n2);
    printf("Enter age of Ajay : ");
    scanf("%d", &n3);
    if (n1 < n2 && n1 < n3)
    {
        printf("\nRam is the youngest.");
    }
    else if (n2 < n1 && n2 < n3)
    {
        printf("\nShyam is the youngest.");
    }
    else
    {
        printf("\nAjay is the youngest");
    }
}