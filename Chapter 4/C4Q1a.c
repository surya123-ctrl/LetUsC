#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("Lower Case");
    else
        printf("Upper Case");
    return 0;
}