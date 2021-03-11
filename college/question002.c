#include <stdio.h>;
main(){
    float side,perimeter,surface;
    printf("Type a square side :");scanf("%f",& side);
    perimeter = side * 4; surface = side * side;
    printf("perimeter is %.2f m, while, the surface is %2.f m²",perimeter,surface);
}