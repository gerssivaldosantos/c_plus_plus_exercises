#include <stdio.h>
int main()
{   //declarando as váriaveis, perceba que é
    //importante declarar cont com "0" inicialmente 
    //(lá na frente dá pra entender o porque)
    int number, cont = 0;

    printf("Type a number : ");
    
    scanf("%d", &number);

    //Eu começo o laço de repetição pulando o número
    //"1" e o número inserido pelo usuario, ou seja
    //o laço vai pegar todos os números contando
    //apartir de 2 até chegar no penultimo número, 
    //antes de atigir o número de fato
    /* Exemplo:
    
    se eu inserir 9 no programa, o laço vai rodando
    pegando os números 2, 3, 4, 5...8. Todos esses
    valores serão atribuidos a váriavel "i" um de cada
    vez, a cada repetição do laço.
     */


    /* COMO LER A ESTRUTURA DO LAÇO:

    FOR (

    DECLARAÇÃO DA VARIAVEL COM TIPO E VALOR;

    CONDIÇÃO DE CONTINUIDADE;

    AÇÃO FEITA NA VARIAVEL INICIAL (Nesse caso fiz um acrescimento)
    
    ) */

    /* No caso, o laço começa com uma variavel i valendo 2,

     continua até que a variável i seja menor que o número

     (muito importante lembrar que dizer que a condição é: "até que 
     o i seja menor" quer dizer que o laço não vai contar a repetição
     em que i seja igual ao número, ou seja, num exemplo onde o número for
     20, na ultima execução do laço o i vai valer 19) 
     
     e a cada execução, o número armazenado na váriavel "i" seja terá seu 
     valor somado a 1, para que o laço tenha o passo de 1 (2,3,4,5,6...)
      */
    for (int i = 2; i < number; i = i + 1)
    {   
        if (number % i == 0){cont ++;break;}
        /* Continuando o exemplo do número 9, chegando aqui
        o primeiro número que será atribuido ao "i" é
        o 2,  */
    }

    if (cont == 0){printf("The number is prim");}

    else{printf("The number is not prim");}

}