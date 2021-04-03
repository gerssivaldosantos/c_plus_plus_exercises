#include <stdio.h>

int main(){
//Vetores para serem consumidos e criarem a morfologia das palavras
char *unidades[10] = {"zero","um","dois","tres","quatro",
"cinco","seis","sete","oito","nove"};
char *dezVinte[10] = {"","onze","doze","treze","quatorze",
"quinze","dezesseis","dezessete","dezoito","dezenove"};
char *dezenas[11] = {"","dez","vinte", "trinta","quarenta",
"cinquenta","sessenta","setenta,","oitenta","noventa","cem"};
 
int numero;
printf("Digite um número e eu escreverei por extenso \n" );scanf("%d",&numero);
printf("O número por extenso é: ");
//printado diretamente os itens do vetor de números naturais
if (numero <= 9) printf("%s\n",unidades[numero]);
//printando os numeros de morfologia distinta (de 11 a 19)
else if (numero % 10 ==0 ) printf("%s\n",dezenas[numero / 10]);
//printando as dezenas separadas, (10,20,30,40)
else if (numero <= 19) printf("%s\n",dezVinte[numero - 10]);
//printando a dezena e a unidade numa estrutura de morfologia composta
else if (numero <=99){ /* pegando dezena */ printf("%s ", dezenas[numero / 10]);
    /* pegando a unidade */printf("e %s\n", unidades[numero - ((numero /10)*10)]);
}}



