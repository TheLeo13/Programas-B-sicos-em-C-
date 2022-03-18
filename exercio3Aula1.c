#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main(){
    int vet[TAM], vet2[TAM];
    int i;

    for(i =0; i<TAM; i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&vet[i]);
    }
    for(i=0; i<TAM; i++)
        if(i % 2 == 0)
            vet2[i] = vet[i] *-1;
        else
            vet2[i] = vet[i];

    for(i=0; i<TAM; i++)
        printf("%d",vet2[i]);
}
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
/*
int main(){

    int i, vet[MAX], vet2[MAX];

    for(i = 0; i < MAX; i++){
        printf("\nInsira o valor %d:", i+1);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < MAX; i++)
        if(i % 2 == 0)
            vet2[i] = vet[i] * -1;
        else
            vet2[i] = vet[i];

    printf("\n\nVetor resultante: ");
    for(i = 0; i < MAX; i++)
        printf("\nPosicao %d - valor: %d - ",i, vet2[i]);


    return 0;
}*/

