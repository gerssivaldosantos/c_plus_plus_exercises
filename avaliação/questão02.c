/* Escreva um programa em C, que dado o preço de uma mercadoria e os valores das
 três moedas disponíveis, calcule o menor número possível de moedas necessário
 para comprar o produto sem haver troco, ou seja, o menor número de moedas tal
 que o total seja exatamente o preço da mercadoria. Se não for possível utilizar
  as moedas para chegar exatamente ao valor solicitado, a saída deve indicar
 “IMPOSSÍVEL”  */

// a parte de ordenar os numeros ta perfeita, mas o resto ta uma bosta
#include <stdio.h>

int main() {
  int price, coin1, coin2, coin3;
  int globalAux, biggest, second, third; // Aux variables
  int biggestCont = 0, secondCont = 0, thirdCont = 0;
  printf("Type the price of product: ");
  scanf("%d", &price);
  for (int i = 1; i <= 3; i++) {
    // this loop catch coin variables
    printf("type the %dº coin value :", i);
    // globalAux variable do save the value in loop time execution
    scanf("%d", &globalAux);
    //"if" chooses where the value goes
    if (i == 1)
      coin1 = globalAux;
    else if (i == 2)
      coin2 = globalAux;
    else
      coin3 = globalAux;
  }

  globalAux = 0;

  if (coin1 > coin2 && coin1 > coin3) {

    // coin1 is the biggest
    biggest = coin1;
    if (coin2 > coin3) {
      second = coin2;
      third = coin3;
      // coin1 is the biggest
      // coin2 is the second biggest
      // coin3 is the third biggest
    } else if (coin2 < coin3) {
      second = coin3;
      third = coin2;
      // coin1 is the biggest
      // coin3 is the second biggest
      // coin2 is the third biggest
    } else if (coin2 == coin3) {
      second = coin2;
      third = coin3;
    }
  }

  else if (coin2 > coin1 && coin2 > coin3) {
    biggest = coin2;
    // coin2 is the biggest
    if (coin1 > coin3) {
      second = coin1;
      third = coin3;
      // coin2 is the biggest
      // coin1 is the second biggest
      // coin3 is the third biggest
    } else if (coin1 < coin3) {
      second = coin3;
      third = coin1;
      // coin2 is the biggest
      // coin3 is the second biggest
      // coin1 is the third biggest
    }

  }

  else if (coin3 > coin2 && coin3 > coin1) {
    biggest = coin3;
    // coin3 is the biggest
    if (coin1 > coin2) {
      second = coin1;
      third = coin2;
      // coin3 is the biggest
      // coin1 is the second biggest
      // coin3 is the third biggest
    }
    if (coin1 < coin2) {
      second = coin2;
      third = coin1;
      // coin3 is the biggest
      // coin2 is the second biggest
      // coin1 is the third biggest
    }
  }

  else if (coin1 == coin2 && coin2 == coin3) {
    // the coins values is same
    biggest = coin1;
    second = coin2;
    third = coin3;
  }

  else if (coin1 == coin2) {
    if (coin1 > coin3) {
      biggest = coin1;
      second = coin2;
      third = coin3;
    } else if (coin1 < coin3) {
      biggest = coin3;
      second = coin1;
      third = coin2;
    }
  }

  else if (coin2 == coin3) {
    if (coin2 > coin1) {
      biggest = coin2;
      second = coin3;
      third = coin1;
    } else if (coin2 < coin1) {
      biggest = coin1;
      second = coin2;
      third = coin3;
    }
  }

  else if (coin1 == coin3) {
    if (coin1 > coin2) {
      biggest = coin1;
      second = coin3;
      third = coin2;
    } else if (coin1 < coin2) {
      biggest = coin2;
      second = coin1;
      third = coin3;
    }
  }

  printf("\nfirst coin %d, second coin %d, third coin %d\n  \n", coin1, coin2,
         coin3);
  printf("the sequence of big to small\n1º:%d\n2º%d\n3º%d\n  \n", biggest,
         second, third);
  int auxPrice = price;

  if ((price / biggest) > 0) {
    biggestCont = price / biggest;
    price = price % biggest;
    if (price < second) {
      if (price != 0) {
        price += biggest;
        biggestCont -= 1;
      }
    }
    printf("foram usadas %d moedas grandes, preço atual %d\n", biggestCont,
           price);
  }

  if ((price / second) > 0) {
    secondCont = price / second;
    price = price % second;
    if (price < third) {
      if (price != 0) {
        price += second;
        secondCont -= 1;
      }
    }
    printf("foram usada %d moedas médias, preço atual %d \n", secondCont,
           price);
  }
  if ((price / third > 0)) {
    thirdCont = price / third;
    price = price % third;
    printf("foram usada %d moedas pequenas, Sobrou %d \n", thirdCont, price);
  }
  if (price > 0) {
    printf(" restante final do preço %d IMPOSSIVEL\n", price);
  }
}
