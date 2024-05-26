#include<stdio.h>
int main() {
    int p = 65, q = 71, sp = 3;
    for(int i=1; i<=7; i++) {
        for(int j=p; j<=q; j++) {
            printf("%c ", j);
        }
        if(i == 1) {
            for(int j=q-1; j>=p; j--) {
                printf("%c ", j);
            }
        }
        if(i > 1) {
            for(int k=1; k<=sp; k++) {
                printf(" ");
            }
            for(int j=q; j>=p; j--) {
                printf("%c ", j);
            }
        sp += 4;
        }
        q --;
        printf("\n");
    }
    return 0;
}