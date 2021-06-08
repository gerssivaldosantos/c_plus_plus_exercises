// QUESTÃO 1 DESAFIO 1

#include <stdio.h>
#define len 10
int main() {
  int vetor1[len] = {2, 3, 4, 5, 6, 12, 1, 23, 11, 32};
  int vetor2[len] = {2, 31, 4, 51, 16, 12, 1, 23, 111, 323};
  int resultado[len];
  int vetorAux[len];
  int cont= 0, iAux= 0, counterAux= 0, counter1= 0, counter2 = 0;

  for (int i = 0; i < len; i++) {

    resultado[i] = vetor1[i] + vetor2[i];

    // Percorrendo todas as possibilidades númericas dentro
    // dos vetores 1 e 2
    for (int e = 0; e < len; e++) {

      // verificando se existe números dentro do vetor 2
      // correspondentes ao atual número em vetor 1
      // para caso contrário indica-lo como número
      // presente no vetor 1 e ausente no 2

      if (i != e && vetor1[i] == vetor2[e]) {
        counterAux++;
      }

      if (vetor1[i] == vetor1[e] && e != i) {
        counter1++;
      }
      if (vetor2[i] == vetor2[e] && e != i) {
        counter2++;
      }
    }

    // aqui verificamos a ausência de correspondentes
    // caso ocorra, o número entra na lista de números
    // a serem printados no final do programa como
    // pede a questão (usei um array aux para guardar)

    if (counterAux == 0 && vetor1[i] != vetor2[i]) {
      vetorAux[iAux] = vetor1[i];
      iAux++;

      counterAux = 0;
    } else
      counterAux = 0;
  }

  if (counter1 != 0 || counter2 != 0)
    printf("Existem números repetidos dentro do mesmo array\n");
  else {
    printf("\nImprimindo a lista de itens presentes no  \nvetor 1 que não "
           "estão presentes no vetor 2 :  \n\n");
    if (iAux == 0) {
      printf("Todos itens contidos em vetor 1, estão em Vetor 2\n");
    } else {
      for (int z = 0; z < iAux; z++) {
        printf("%d\n", vetorAux[z]);
      }
    }
    printf("Somando os vetores 1 e 2...\n\n");
    for (int y = 0; y < len; y++) {
      printf("%dºNúmero:     %d+%d=%d\n", y + 1, vetor1[y], vetor2[y],
             resultado[y]);
      printf("-------------------------\n");
    }

    printf("Imprimindo os números primos do Vetor 1\n\n");
    for (int h = 0; h < len; h++) {

      for (int i = 2; i < vetor1[h]; i++) {
        if (vetor1[h] % i == 0) {
          cont++;
          break;
        }
      }

      if (cont == 0) {
        printf("%d / ", vetor1[h]);
      }

      cont = 0;
    }

    printf("\nImprimindo os números primos do Vetor 2\n\n");
    for (int h = 0; h < len; h++) {

      for (int i = 2; i < vetor2[h]; i++) {
        if (vetor2[h] % i == 0) {
          cont++;
          break;
        }
      }

      if (cont == 0) {
        printf("%d / ", vetor2[h]);
      }

      cont = 0;
    }

    printf("\nImprimindo os números primos em resultados\n\n");
    for (int h = 0; h < len; h++) {

      for (int i = 2; i < resultado[h]; i++) {
        if (resultado[h] % i == 0) {
          cont++;
          break;
        }
      }

      if (cont == 0) {
        printf("%d / ", resultado[h]);
      }

      cont = 0;
    }
    printf("\n");
  }
}