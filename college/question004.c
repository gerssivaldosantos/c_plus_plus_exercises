 #include <stdio.h>;

 main(){
    float side1, side2, side3, perimeter; 
    printf("type a side1 of triangle : ");scanf("%f",& side1);
    printf("type a side2 of triangle : ");scanf("%f",& side2);
    printf("type a side3 of triangle : ");scanf("%f",& side3);
    perimeter = side1 + side2 + side3;
    printf("The perimeter is %.2f \n",perimeter);
    return 0;
 }