#include <stdio.h>;
#include <stdlib.h>;
main(){
    //this program analzyz two numbers and verify if they is same
    int a, b, c;
    printf("\nType a number"); scanf("%d",&a);
    printf("\nAgain, Type a number"); scanf("%d",&b);

    if (a == b)printf("Typed values were %d and %d, therefore, they is same", a, b);
     
    else printf("Typed values were %d and %d, therefore, they is different ", a, b);

    return 0;
}