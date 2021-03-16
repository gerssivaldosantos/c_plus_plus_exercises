#include <stdio.h>;

main(){
    int number1,number2,rest,quotient;
    printf("Type a number 1 :");scanf("%d",&number1);
    printf("Type a number 2 :");scanf("%d",&number2);
    quotient = number1 / number2;
    rest = number1 % number2;
    printf("\nThe rest is %d\n",rest);
    printf("The quotient is %d\n", quotient);
    return 0;
}