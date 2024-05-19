#include <stdio.h>
int main() {
    for(int i=1; i<=500; i++) {
        int n = i, sum = 0;
        for(int j=n; j>0; j/=10) {
            int c = j % 10;
            sum += (c * c * c);
        }
        if(sum == n) {
            printf("%d\n",n);
        }
    }
    return 0;
}