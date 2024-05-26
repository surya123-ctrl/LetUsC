#include<stdio.h>
#include<math.h> 
int main() {
   float i,p,q,r,n,a,d;
    for(i=1;i<=10;i++){
        printf("\n\nEnter principal, rate, time (in year) and compound interest respectively : ");
        scanf("%f %f %f %f", &p,&r,&n,&q);
        d=pow((1+r/q),n*q);
        a=p*d;
        printf("\n%f is the amount.", d);
    }
    return 0;
}