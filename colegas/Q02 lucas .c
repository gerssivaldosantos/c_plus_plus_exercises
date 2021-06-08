#include <stdio.h>

int main() {
    int tostoes, aux_tostoes;
    int moeda1, moeda2, moeda3;
    int opcao, maior, menor, meio, aux_maior, aux_menor, aux_meio;
    printf("-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\tPindorama Market\n");
    printf("-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    printf("Insira o valor da sua mercadoria: ");
    scanf("%d", &tostoes);
    aux_tostoes = tostoes;

    printf("Insira os valores das 3 moedas respectivamente: ");
    scanf("%d %d %d", &moeda1, &moeda2, &moeda3);
    if (moeda1 <= 0 || moeda2 <= 0 || moeda3 <= 0)
        printf("A moeda inserida eh invalida. TENTE NOVAMENTE!\n");
    
    if (moeda1 > moeda2 && moeda2 > moeda3) {
        maior = moeda1; meio = moeda2; menor = moeda3;
    }
    else if (moeda2 > moeda1 && moeda1 > moeda3) {
        maior = moeda2; meio = moeda1; menor = moeda3;
    }
    else if (moeda3 > moeda1 && moeda1 > moeda2) {
        maior = moeda3; meio = moeda1; menor = moeda2;
    }
    else if (moeda3 > moeda2 && moeda2 > moeda1) {
        maior = moeda3; meio = moeda2; menor = moeda1;
    }
    aux_maior = maior; aux_meio = meio; aux_menor = menor;

    maior = tostoes / maior;
    tostoes %= aux_maior;
    meio = tostoes / meio;
    tostoes %= aux_meio;
    menor = tostoes / menor;
    tostoes %= aux_menor;

    if (aux_maior * maior + aux_meio * meio + aux_menor * menor == aux_tostoes) {
        if (maior != 0) 
            printf("Moedas de %d = %d\n", aux_maior, maior);
        if (meio != 0)
            printf("Moedas de %d = %d\n", aux_meio, meio);
        if (menor != 0)
            printf("Moedas de %d = %d", aux_menor, menor);
    }
    else
        printf("IMPOSSIVEL!");
    return 0;
}