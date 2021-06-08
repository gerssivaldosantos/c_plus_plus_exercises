#include <stdio.h>

int main() {
  int price, coin1, coin2, coin3;
  int globalCoinCont = 0, globalAux, biggest, second, third;
  int biggestCont = 0, secondCont = 0, thirdCont = 0;
  printf("Type the price of product: ");
  scanf("%d", &price);
  printf("Type the coins values (not is be need that the coins will are in order)\n\n ");
  printf("Type de first coin value : ");scanf("%d",&coin1);
  printf("Type de second coin value : ");scanf("%d",&coin2);
  printf("Type de third coin value : ");scanf("%d",&coin3);
  
  if (coin1 > coin2 && coin1 > coin3) {
    biggest = coin1;
    if (coin2 > coin3) {
      second = coin2;
      third = coin3;
    } else if (coin2 < coin3) {
      second = coin3;
      third = coin2;
    } else if (coin2 == coin3) {
      second = coin2;
      third = coin3;
    }
  } else if (coin2 > coin1 && coin2 > coin3) {
    biggest = coin2;
    if (coin1 > coin3) {
      second = coin1;
      third = coin3;
    } else if (coin1 < coin3) {
      second = coin3;
      third = coin1;
    }
  } else if (coin3 > coin2 && coin3 > coin1) {
    biggest = coin3;
    if (coin1 > coin2) {
      second = coin1;
      third = coin2;
    }
    if (coin1 < coin2) {
      second = coin2;
      third = coin1;
    }
  } else if (coin1 == coin2 && coin2 == coin3) {
    biggest = coin1;
    second = coin2;
    third = coin3;
  } else if (coin1 == coin2) {
    if (coin1 > coin3) {
      biggest = coin1;
      second = coin2;
      third = coin3;
    } else if (coin1 < coin3) {
      biggest = coin3;
      second = coin1;
      third = coin2;
    }
  } else if (coin2 == coin3) {
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
    printf("Impossivel (não tanto) \n\n\n");

    /* price += (biggestCont*biggest) + (secondCont*second) + (thirdCont*third);
    printf("%d",price/second); */
    

    //colocar aqui a mesma verificação que fiz em ordem decrescente, mas em outras
    //ordens para tentar solucionar o problema do 1000, 150, 35 , 27
  }
}

/* 
Type the price of product: 1000
type the 1º coin value :150
type the 2º coin value :35
type the 3º coin value :27

first coin 150, second coin 35, third coin 27
  
the sequence of big to small
1º:150
2º35
3º27
  
foram usadas 6 moedas grandes, preço atual 100
foram usada 2 moedas médias, preço atual 30 
foram usada 1 moedas pequenas, Sobrou 3 
 restante final do preço 3 IMPOSSIVEL

 tem que dar 2 moedas grandes(150) e 20 médias (35)

 */
/* 
Type the price of product: 500
Type the coins values (not is be need that the coins will are in order)

 Type de first coin value : 127
Type de second coin value : 100
Type de third coin value : 51

first coin 127, second coin 100, third coin 51
  
the sequence of big to small
1º:127
2º100
3º51
  
foram usadas 3 moedas grandes, preço atual 119
foram usada 0 moedas médias, preço atual 119 
foram usada 2 moedas pequenas, Sobrou 17 
Impossivel (não tanto) 

era pra dar 5 moedas médias

 */

/* Escreva um programa em C, que dado o preço de uma mercadoria e os valores das
 três moedas disponíveis, calcule o menor número possível de moedas necessário
 para comprar o produto sem haver troco, ou seja, o menor número de moedas tal
 que o total seja exatamente o preço da mercadoria. Se não for possível utilizar
  as moedas para chegar exatamente ao valor solicitado, a saída deve indicar
 “IMPOSSÍVEL”  */