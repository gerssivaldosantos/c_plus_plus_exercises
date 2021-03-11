#include <stdio.h>;

main(void){
float  surface,  pi = 3.14, radius;
printf("Type a radius : ");scanf("%f",& radius);
surface = radius * radius * pi;
printf("the surface of circle is %.2f m²",surface);
return 0;
}