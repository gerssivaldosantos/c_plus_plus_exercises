#include <stdio.h>
#define len 10
int main() {
  int vetor1[len] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 10};
  int vetor2[len] = {10, 9, 8, 7, 7, 5, 4, 3, 2, 1};
  int counter1, counter2 = 0;

  
  for (int i = 0; i < len; i++) {
    // Uso laços aninhados para percorrer
    //ŧodas as possiveis combinações entre números
    for (int e = 0; e < len; e++) {
      // verificando se existe números repetidos
      // em cada vetor
      // dentro do vetor caso exista números
      // repetidos a váriavel contadora
      // tem +1 somado ao seu total
      if (vetor1[i] == vetor1[e] && e != i) {
        counter1++;
      }
      if (vetor2[i] == vetor2[e] && e != i) {
        counter2++;
      }


   
    }
  }

  printf("%d %d",counter1,counter2);
  if (counter1 != 0 || counter2 != 0)printf("Com iguais");
  else printf("sem iguais");
}