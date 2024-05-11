#include <stdio.h>
int main()
{
    int length = 1189, breadth = 841, temp;
    for (int i = 0; i <= 8; i++)
    {
        printf("Size of A%d sheet : %dmm * %dmm.\n", i, length, breadth);
        temp = length;
        length = breadth;
        breadth = temp / 2;
    }
    return 0;
}