#include <stdio.h>;
main(){
    float base, height, surface, perimeter;
    printf("Type a retangle base : ");scanf(" %f",&base);
    printf("Type a retangle height : ");scanf(" %f",&height);
    surface = base * height; perimeter = (base * 2) + (height *2);
    printf("The surface is %.2f m², and the perimeter, %.2f m",surface,perimeter);
}