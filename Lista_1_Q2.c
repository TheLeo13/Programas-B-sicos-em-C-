/*Escreva um programa que leia 2 vetores, contendo a matricula e a nota de n alunos, respectiva-
mente. Através de uma função que recebe o 2 vetores e o valor n como parâmetros, determine
as duas maiores notas e, imprima-as juntamente com o código da matrícula do aluno.*/

#include <stdio.h>
#include <stdlib.h>
/* #define TAM 200 declarando uma variável global para servir como tamanho dos vetores que iremos utilizar
 essa prática é útil nesse tipo de código para facilitar a manutenção e trocar o tamanho dos vetores sem a
 necessidade de alterar cada linha onde eles estão declarados */
#define TAM 200

// escopo da função que irá imprimir as notas
void imprime(int matri[], int nota[],int n);

int main(){
// declarando dois vetores de inteiros para receber o código da matricula e a nota do aluno    
    int matri[TAM], nota[TAM], n,i;

    printf("Digite o numero de alunos a serem inseridos: ");
    scanf("%d",&n);
// o nosso for recebe como número de interações o número de alunos a serem inseridos dito pelo usuário
    
    for(i=0; i<n; i++){
        printf("Digite a matricula do aluno %d: ",i+1);
        scanf("%d",&matri[i]);
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%d",&nota[i]);
    }
// após inseridos as informações vamos fazer a chamada da função que irá imprimir na tela a nota de cada aluno
    imprime(matri,nota,n);
}
// função do tipo void já que não há necessidade de retornar nenhum valor ao main

void imprime(int matri[],int nota[],int n){
    int i;
    int maior_nota = 0, maior_nota2 = 0;
    int maior_matri = 0, maior_matri2 = 0;
// inicializando as várives com 0 para não ocorrer risco delas serem inicializadas com lixo de memória

    for(i=0; i<n; i++){
        if(nota[i] >= maior_nota){
            maior_nota2 = maior_nota;
            maior_matri2 = maior_matri;
            maior_nota = nota[i];
            maior_matri = matri[i];
        }
    } 

 /* o comando for percorre todo o vetor de notas que a função imprime recebe como parâmetro e compara a nota da posição i
com a nota presente na varíavel maior_nota, caso a nota na posição i do nosso vetor for maior que a nossa variável de comparação
nossa variável irá receber o valor presente na posição i e nossa variável maior_nota2 recebe o antigo valor presente na variável 
maior-nota. Desse forma ao final do laço as duas variáveis estarão contendo os dois maiores valores presentes no vetor de notas.
Para associar esses valores às mátriculas basta adicionar nas variáveis maior_matri e maior_matri2 o valores presentes na posição 
das maiores notas já que os dois vetores foram preenchidos simultaneamentes e tem o mesmo tamanho.*/
   
    printf("A maior nota e %d da matricula %d\n"
           "A segunda maior nota e %d da matricula %d",maior_nota, maior_matri, maior_nota2, maior_matri2);
}
