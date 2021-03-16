#include <stdio.h>;
int main (){
    //calc volume on cylinder
    float radius, height, pi = 3.14, volume;
    printf("type radius ");scanf("%f",& radius);
    printf("type a height ");scanf("%f",& height);
    volume = pi * (radius * radius) * height;
    printf("the volume is %.2f m² \n", volume);
    return 0;
}