#include<stdio.h>
void print(int year, char c) {
    for(int i=1; i<= year; i++) printf("%c", c);
}
void conversion(int year) {
    int v, x ,l, c, d, m;
    m = year / 1000;
    print(m, 'm');
    year %= 1000;

    d = year / 500;
    print(d, 'd');
    year %= 500;

    c = year / 100;
    print(c, 'c');
    year %= 100;

    l = year / 50;
    print(l, 'l');
    year %= 50;

    x = year / 10;
    print(x, 'x');
    year %= 10;

    v = year / 5;
    print(v, 'v');
    year %= 5;

    print(year, 'i');
}
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    conversion(year);
    return 0;
}