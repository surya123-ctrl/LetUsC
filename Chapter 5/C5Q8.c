#include<stdio.h>
int main() {
  int num,rem,oct=0,rev=0,rem1;
  scanf("%d",&num);
  while(num) {
    rem=num%8;
    oct=10*oct+rem;
    num/=8;
  }
  while(oct) {
    rem1=oct%10;
    rev=rev*10+rem1;
    oct/=10;
   }
    printf("%d is octal equivalent",rev);
    return 0;
}