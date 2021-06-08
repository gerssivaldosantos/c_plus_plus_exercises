#include <stdio.h>

int main() {
  int preco, precoX;
  int ma, mb, mc;
  int m1, m2, m3;
  int q1, q2, q3;

  printf(
      "Escreva o preço da mercadoria e o valor das 03 moedas disponíveis:\n");
  scanf("%d%d%d%d", &preco, &ma, &mb, &mc);

  if (ma > mb && mb > mc) {
    m1 = ma;
    m2 = mb;
    m3 = mc;
  } else if (ma > mb && mc > mb) {
    m1 = ma;
    m2 = mc;
    m3 = mb;
  } else if (mb > ma && ma > mc) {
    m1 = mb;
    m2 = ma;
    m3 = mc;
  } else if (mb > ma && mc > ma) {
    m1 = mb;
    m2 = mc;
    m3 = ma;
  } else if (mc > ma && ma > mb) {
    m1 = mc;
    m2 = ma;
    m3 = mb;
  } else if (mc > ma && mb > ma) {
    m1 = mc;
    m2 = mb;
    m3 = ma;
  }

  precoX = preco;

  q1 = precoX / m1;
  precoX = precoX % m1;
  q2 = precoX / m2;
  precoX = precoX % m2;
  q3 = precoX / m3;

  if (q1 * m1 + q2 * m2 + q3 * m3 == preco) {
    printf(
        "Serão necessárias %d moedas de %d, %d moedas de %d e %d moedas de %d",
        q1, m1, q2, m2, q3, m3);
  } else {


      
    if (preco % m2 == 0) {
      q2 = preco / m2;
      printf("Serão necessárias apenas %d moedas de %d.", q2, m2);
    } else if (preco % m3 == 0) {
      q3 = preco / m3;
      printf("Serão necessárias apenas %d moedas de %d.", q3, m3);
    } else {
      precoX = preco;

      q1 = (precoX / m1) - 1;
      precoX = precoX - (m1 * q1);
      q2 = precoX / m2;
      precoX = precoX % m2;
      q3 = precoX / m3;

      if (q1 * m1 + q2 * m2 + q3 * m3 == preco) {
        printf("Serão necessárias %d moedas de %d, %d moedas de %d e %d moedas "
               "de %d",
               q1, m1, q2, m2, q3, m3);
      } else {
        precoX = preco;

        q1 = (precoX / m1) - 2;
        precoX = precoX - (m1 * q1);
        q2 = precoX / m2;
        precoX = precoX % m2;
        q3 = precoX / m3;

        if (q1 * m1 + q2 * m2 + q3 * m3 == preco) {
          printf("Serão necessárias %d moedas de %d, %d moedas de %d e %d "
                 "moedas de %d",
                 q1, m1, q2, m2, q3, m3);
        } else {
          precoX = preco;

          q1 = (precoX / m1) - 3;
          precoX = precoX - (m1 * q1);
          q2 = precoX / m2;
          precoX = precoX % m2;
          q3 = precoX / m3;

          if (q1 * m1 + q2 * m2 + q3 * m3 == preco) {
            printf("Serão necessárias %d moedas de %d, %d moedas de %d e %d "
                   "moedas de %d",
                   q1, m1, q2, m2, q3, m3);
          } else {
            precoX = preco;

            q1 = (precoX / m1) - 4;
            precoX = precoX - (m1 * q1);
            q2 = precoX / m2;
            precoX = precoX % m2;
            q3 = precoX / m3;

            if (q1 * m1 + q2 * m2 + q3 * m3 == preco) {
              printf("Serão necessárias %d moedas de %d, %d moedas de %d e %d "
                     "moedas de %d",
                     q1, m1, q2, m2, q3, m3);
            } else {
              printf("Impossível");
            }
          }
        }
      }
    }
  }
  return 0;
}