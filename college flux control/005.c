/* 5 - Escrever um programa que calcula e escreve o produto dos
números primos entre 92 e 1478. */
#include <stdio.h>
int main() {
  int number,prim, product, cont = 0;

  for (int number = 92; number <= 1478; number++) {
    cont = 0;

    for (int i = 2; i < number; i = i + 1)
    {   
        if (number % i == 0){/* printf("%d not\n",number) */;cont ++;break;}
      
    }

    if (cont == 0){printf("%d\n",number);}

    



  }
}