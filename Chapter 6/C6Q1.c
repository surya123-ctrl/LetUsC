#include<stdio.h>
int main() {
    printf("Prime Numbers: ");
    for(int i=1; i<=300; i++) {
        int p = 0;
        for(int j=1; j<=i; j++) {
            if(i % j == 0) p++;
            if(p > 2) break;
        }
        if(p == 2) printf("%d ", i);
    }
    return 0;
}