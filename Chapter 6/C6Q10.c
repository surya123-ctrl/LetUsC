#include<stdio.h>
int main() {
    int population = 100000, rate = 10, time = 10;
    for(int i=1; i<=10; i++) {
        population = population + (population * rate / 100);
        printf("Population after %d year: %d\n", i, population);
    }
    return 0;
}