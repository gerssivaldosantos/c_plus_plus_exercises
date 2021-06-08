#include <stdio.h>

int example[15] = {150, 140, 130, 120, 11, 11, 9, 8, 7, 6, 5, 4, 3, 2, 2};
int cont = 0, number;
int main() {
  printf("Digite o número e direi quantas vezes ele aparece no vetor : ");
  scanf("%d", &number);
  for (int i = 0; i < 15; i++) {
      if (number == example[i]){
          printf("O número %d aparece na posição %d ",number,i);

          cont ++;
      }
  }
  printf("\no número aparece %d vezes\n",cont);
}