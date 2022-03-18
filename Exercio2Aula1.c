#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    int x[TAM];
    int i;

    for(i=0; i<TAM;i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&x[i]);
    }

    for(i= i-1; i>=0;i--){
        printf("\n%d - %d",x[i],x[i]*x[i]);
    }


}
