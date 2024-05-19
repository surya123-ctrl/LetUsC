#include<stdio.h>
int main() {
    int hours = 0, extraAmount = 0;
    for(int i=0; i<10; i++) {
        printf("Enter hours: ");
        scanf("%d", &hours);
        if(hours > 40) {
            extraAmount = (hours - 40) * 12;
            printf("Overtime Pay: %d\n", extraAmount);
        }
        else {
            printf("No Overtime done.\n");
        }
    }
    return 0;
}