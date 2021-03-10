#include <stdio.h>;
#include <stdlib.h>;
main(){
    //this program analzyz two numbers and verify if they is same
    int a, b, c;
    printf("\nType a number"); scanf("%d",&a);
    printf("\nAgain, Type a number"); scanf("%d",&b);
    if (a == b){printf("\nSame numbers");} else {printf("\nDifferent numbers\n");}
    return 0;
}