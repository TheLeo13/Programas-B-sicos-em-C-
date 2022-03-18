#include <stdio.h>
#include <stdlib.h>
#define LINHA 2
#define COLUNA 3
#define MAX 101

int main(){

    int i,j,m[LINHA][COLUNA], maior;
    srand(time(NULL));
    maior = m[i][j];
    printf("\t...Matriz M...\n");
    for(i=0; i<LINHA; i++){
        printf("\n");
        for(j=0;j<COLUNA;j++){
            m[i][j] = rand()%MAX;
            if(m[i][j] > maior)
                maior = m[i][j];
            printf("\t%d ",m[i][j]);
        }
    }
    j=0;
    i=0;
    printf("\n\t...Matriz R...\n");
    for(i=0; i<LINHA; i++){
        printf("\n");
        for(j=0;j<COLUNA;j++){
            m[i][j] *= maior;
            printf("\t%d ",m[i][j]);
        }
    }
    printf("\n\n");
    system("PAUSE");
}
