#include<stdio.h>
int main() {
    printf("y\tx\ti\n");
    for(int y=1; y<=6; y++) {
        for(float x=5.5; x<=12.5; x+=0.5) {
            float i = 2 + (y + (x * 0.5));
            printf("%d\t%.2f\t%.2f\n", y, x, i);
        }
    }
    return 0;
}