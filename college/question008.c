#include <stdio.h>
main(){
    float fahrenheit,celsius;
    printf("Type a fahrenheit temperature");scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%f ºF = %.2f ºC",fahrenheit,celsius);

    return 0;
}