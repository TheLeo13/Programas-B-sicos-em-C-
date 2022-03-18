#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main(){
    int dec,bin[TAM];
    int i = 0;
    printf("Digite o numero em base decimal: ");
    scanf("%d",&dec);

   while(dec>0){
    bin[i] = dec%2;
    dec /= 2;
    i++;
   }

    for(i;i>0;i--){
        printf("%d",bin[i-1]);

    }
}
