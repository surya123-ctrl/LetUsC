#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z') && !(ch >= 48 && ch <= 57))
        printf("Special Character");
    else
        printf("Not a special character");
    return 0;
}