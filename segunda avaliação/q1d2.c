#include <stdio.h>
//O tamanho do array sempre vai ser 10
//então criei essa constante para organizar
#define len 10
int main() {
  int vetor1[len] = {1,2,15,4,5,6,15,8,9,0};
  int vetor2[len] = {0,9,8,7,6,5,4,3,2,1};
  int vetorAux[len];
  int iAux, counterAux, counter1, counter2 = 0;

  
  for (int i = 0; i < len; i++) {

    for (int e = 0; e < len; e++) {

      if (i != e && vetor1[i] == vetor2[e] ){
        counterAux ++;
      }
      

      if (vetor1[i] == vetor1[e] && e != i) {
        counter1++;
      }
      if (vetor2[i] == vetor2[e] && e != i) {
        counter2++;
      }
    }
    if (counterAux == 0 ){
      vetorAux[iAux] = vetor1[i];
      iAux ++;
      printf("%d , ", vetor1[i]);
      counterAux = 0;
    }
    else counterAux = 0;
  }

  printf("%d %d",counter1,counter2);
  if (counter1 != 0 || counter2 != 0)printf("Existem números repetidos dentro do mesmo array");
  else {
    printf("Imprimindo a lista de itens presentes no vetor 1 \n que não estão presentes no vetor 2  ");



  }

}