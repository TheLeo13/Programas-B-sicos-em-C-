#include <stdio.h>
#include <stdlib.h>
#define TAM 1000

void imprime(int vet[], int n);

int main(){
    int vet[TAM], n, i;
    printf("Digite quantos numeros serao gerados: ");
    scanf("%d",&n);

    srand(time(NULL));
    for(i=0; i<n; i++){
        vet[i] = rand()%50;
        printf("\n%d",vet[i]);
    }

    imprime(vet,n);
}

void imprime(int vet[], int n){
    int i;
    printf("\n---Vetor em ordem decrescente--\n");
    for(i=n-1; i>=0; i--)
        printf("\n%d",vet[i]);

}


