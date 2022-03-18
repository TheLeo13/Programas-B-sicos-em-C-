#include <stdio.h>
#include <stdlib.h>
#define TAM 200

void imprime(int matri[], int nota[],int n);

int main(){
    int matri[TAM], nota[TAM], n,i;

    printf("Digite o numero de alunos a serem inseridos: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Digite a matricula do aluno %d: ",i+1);
        scanf("%d",&matri[i]);
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%d",&nota[i]);
    }
    imprime(matri,nota,n);
}
void imprime(int matri[],int nota[],int n){
    int i;
    int maior_nota = 0, maior_nota2 = 0;
    int maior_matri = 0, maior_matri2 = 0;
    for(i=0; i<n; i++){
        if(nota[i] >= maior_nota){
            maior_nota2 = maior_nota;
            maior_matri2 = maior_matri;
            maior_nota = nota[i];
            maior_matri = matri[i];
        }
    }
    printf("A maior nota e %d da matricula %d\n"
           "A segunda maior nota e %d da matricula %d",maior_nota, maior_matri, maior_nota2, maior_matri2);
}
