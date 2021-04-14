#include <stdio.h>

int main() {
   int number = 50, a = 0, b = 1, c;

    while(c <= number){
        printf("%d",a);
        printf("%d",b);
        b = a;
        c = a + b;
        printf("%d",c);
        a = c;
    }}
