#include <stdio.h>
#include <stdlib.h>

//Ives Rodrigues / Gerssivaldo Santos 

int main(){
    int HHMMSS,hhmmss,HH,MM,SS;
    float coefhora = 0.864; //coeficiente obtido pelo cálculo da quantidade de segundos convencional / quantidade de segundo decimal: 86400/1000000;
    
    printf("Digite a hora no formato HHMMSS: ");
    scanf("%d",&HHMMSS);
   
    HH=(HHMMSS / 10000); //operaçao de separação da unidade hora;
    MM=(HHMMSS % 10000) / 100; //operaçao de separação da unidade minuto;
    SS=((HHMMSS % 10000) % 100); //operaçao de separação da unidade segundo;
    
    if ( HH>=0 && HH<=23 && MM>=0 && MM<=59 && SS>=0 && SS<=59){ //condicional amarrando o formato indicado;
        
        hhmmss=((HH*3600+MM*60+SS)/coefhora); //cálculo da hora decimal;

        printf("\nA hora em decimal é:%.6d",hhmmss); //resposta ao usuário com resultado; 
            
    }else{

        printf("O formato está errado! Por Favor, digite novamente na próxima.\n"); //aviso ao usuário que deve inserir em formato indicado;

    }

    return 0;
}