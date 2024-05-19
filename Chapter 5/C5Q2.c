#include<stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; fact*=i,i++);
    printf("Factorial: %d", fact); 
    return 0;
}