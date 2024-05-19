#include<stdio.h>
int main() {
    int n, m;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int temp = 1;
    printf("Enter value of m: ");
    scanf("%d", &m);
    for(int i=0; i<m; i++) temp = temp * n ;
    printf("%d ^ %d: %d", n,m,temp);
    return 0;
}