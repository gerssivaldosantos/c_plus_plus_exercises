#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){


char *unidades[11] = {"zero","um","dois","tres","quatro",
"cinco","seis","sete","oito","nove"};

char *dezVinte[11] = {"","onze","doze","treze","quatorze",
"quinze","dezesseis","dezessete","dezoito","dezenove"};

char *dezenas[11] = {"","dez","vinte", "trinta","quarenta",
"cinquenta","sessenta","setenta,","oitenta","noventa","cem"}; 

int numero;

printf("Digite um número e eu escreverei por extenso \n" );scanf("%d",&numero);
printf("O número por extenso é: ");
if (numero <= 9){
    printf("%s",unidades[numero]);
}
else if (numero % 10 ==0 ){
    printf("%s",dezenas[numero / 10]);
    }

else if (numero <= 19){
    printf("%s",dezVinte[numero - 10]);
}
else if (numero <=99){
    
    printf("%s ", dezenas[numero / 10]);
    printf("e %s", unidades[numero - ((numero /10)*10)]);
}


}



