#include <stdio.h>

int main() {

  int num, e;
  printf("m : ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    for (int b = 0; b <= i; b++) {
      if (b >= i) {
        printf("#\n");
      }
      printf("#");
    }
  }
}