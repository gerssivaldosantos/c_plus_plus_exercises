#include <stdio.h>
#include <stdlib.h>
// Ives Rodrigues / Gerssivaldo Santos
int main() {
  int num, tomada;
  printf("Para 04 réguas, digite número de tomadas: ");
  scanf("%d", &num);
  if (num >= 1) {
    tomada = ((num * 4)) - 3;
    printf("Você tem %d tomadas para uso!!!", tomada);
  } else {
    printf("Não há tomadas disponíveis!");
  }
  return 0;
}