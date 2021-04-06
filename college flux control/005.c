/* 5 - Escrever um programa que calcula e escreve o produto dos
números primos entre 92 e 1478. */
#include <stdio.h>
#include <math.h>
int main() {
  
  long double floatnumber = 92,prim, product, cont = 0;

  for (int number = 92; number <= 1478; number++) {
    cont = 0;
    
    for (int i = 2; i < number; i = i + 1)
    {   
        if (number % i == 0){/* printf("%d not\n",number) */;cont ++;break;}
      
    }

    if (cont == 0){
      
      if (number == 97){product = 97.0;}
      else{
        long double beforeproduct = product;
        product = product * floatnumber;
        printf("the number %.0Lf X %.0Lf = %.0Lf \n",floatnumber, beforeproduct, product);
      }
      }

  floatnumber ++;
  }

  printf("\n%0.Lf\n",product);
}