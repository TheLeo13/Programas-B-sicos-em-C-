#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define DISCIPLINAS 9
#define ALUNOS 40
#define MAX 10
#define MAIOR_NOTA 101

int main(){

//    int i;
//    srand(time(NULL));
//
//    printf("\n\nTamanho de um INT: %d\n\n", sizeof(int));
//    printf("\n\nTamanho de um RAND_MAX: %d\n\n", RAND_MAX);
//    for(i=0; i< MAX; i++)
//        printf("\n %d",rand() % MAIOR_ALEATORIO);

    int i, j , mapa_notas[ALUNOS][DISCIPLINAS];
    float media;

    printf("\nPreechendo as notas...\n");
    Sleep(200);
    for(i=0; i<ALUNOS; i++){
        printf("\nNotas do aluno %d: ", i+1);
        Sleep(150);
        for(j=0;j<DISCIPLINAS;j++){
            mapa_notas[i][j] = rand()%MAIOR_NOTA;
            printf("\nDisciplina %d: %d",j+1,mapa_notas[i][j]);
        }
    }
    printf("\n\n");
    for(i=0; i<ALUNOS; i++){
        printf("\nAluno %d",i+1);
        media = 0;
        for(j=0;j<DISCIPLINAS;j++){
            media += mapa_notas[i][j];

        }
        media = media / DISCIPLINAS;
        Sleep(100);
        printf(" %.2f",media);
    }

    return 0;
}
