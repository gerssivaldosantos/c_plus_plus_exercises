#include <stdio.h>;
#include <stdlib.h>;

main(){
    
    int number_1, number_2, sum;

    printf("\n Type a number \t");

    scanf("%d",& number_1);

    printf("\n again, type a number \t");

    scanf("%d",& number_2);

    sum = number_1 + number_2;

    printf("The sum of this numbers is: ");

    printf("%d \n", sum);
   
}