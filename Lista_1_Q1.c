#include <stdio.h>
#include <stdlib.h>

float serie(int x, int n);

int main(){
    float x;
    int n;

    printf("Digiite o numerador: ");
    scanf("%f",&x);
    printf("Digite o numero de termos: ");
    scanf("%d",&n);

    printf("O valor e: %.2f\n\n",serie(x,n));

    system("PAUSE");
}

float serie(int x, int n){
    int i;
    for(i=2; i<=n; i++){
        if(x%2==0)
            x -= (x/i);
        else
            x+=(x/i);
    }
    return x;
}
