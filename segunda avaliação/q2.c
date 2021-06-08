// QUESTÃO 2
#include <stdio.h>
#define len 10
int main() {

  int senha[len];
  int chute[len];
  int ignorados[len];
  int ignorar = 0, tentativas = 0, cont = 0, e = 0, b = 0, w;
  // laços para captura de dados
  // senha
  printf("\nSenha\n");

  for (int z = 0; z < len; z++) {

    printf("Digite o %dº algarismo da senha :", z + 1);
    scanf("%d", &senha[z]);
  }

  // Jogo
  while (w != len) {

    printf("\nChute\n");
    tentativas++;
    for (int r = 0; r < len; r++) {

      printf("Digite o %dº algarismo da chute :", r + 1);
      scanf("%d", &chute[r]);
    }

    // processamento
    for (int x = 0; x < len; x++) {
      for (int y = 0; y < len; y++) {

        // adicionando ao exato
        if (senha[x] == chute[y] && y == x) {
          e++;

          // adicionando ao bom
        } else if (senha[x] == chute[y]) {
          for (int n = 0; n < cont; n++) {
            if (senha[x] == ignorados[n]) {
              ignorar = 1;
            }
          }
          if (ignorar == 0) {
            b++;
            ignorados[cont] = senha[x];
            cont++;
          }
          ignorar = 0;
        }
      }
    }
    if (e == len)
      b = 0;
    printf("\nE%d:%dB\n", e, b);
    w = e;
    e = 0;
    b = 0;
    cont = 0;
  }
  printf("Número de tentativas: %d\n", tentativas);
}