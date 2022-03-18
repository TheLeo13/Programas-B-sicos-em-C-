/*Escreva um programa que defina 1 vetor contendo n valores reais gerados de maneira aleatória.
Crie uma função que receba este vetor e o valor n como parâmetros e, imprima o vetor em
ordem decrescente na tela.*/

#include <stdio.h>
#include <stdlib.h>
// criando variável global para facilitar na manutenção do código 
#define TAM 1000

// escopo da função que irá imprimir o vetor 
void imprime(int vet[], int n);

int main(){
    int vet[TAM], n, i;
    printf("Digite quantos numeros serao gerados: ");
    scanf("%d",&n);
// rand é a nossa função que gera um número aleatório que irá preencher cada posição do nosso vetor de inteiros
    srand(time(NULL));
    for(i=0; i<n; i++){
        vet[i] = rand()%50;
        printf("\n%d",vet[i]);
    }
// o comando for foi utilizado para pecorrer nosso vetor e adicionar um numero aleatório gerada pela função rand em cada posição do vetor
// chamada da função que irá imprime nosso vetor     
    imprime(vet,n);
}

void imprime(int vet[], int n){
    int i;
    printf("\n---Vetor em ordem decrescente--\n");
    for(i=n-1; i>=0; i--)
        printf("\n%d",vet[i]);

}
// o comando for imprime o vetor de maneira inversa começando a pecorrer o vetor pela ultima posição até a posição 0 

