#include<stdio.h>
int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    int ans = 1;
    for(int i=1; i<=b; i++) ans*=a;
    printf("%d", ans);
    return 0;
}