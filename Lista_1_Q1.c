/*Implemente um programa em C que leia um valor x e calcule o valor de S, usando os n primeiros
termos da série abaixo:
    S = x/1 - x/2 + x/3 - x/4 + x/5 - x/6 + ... x/n
OBS 1: Deve-se fazer a leitura de x e n na função main() bem como a impressão de S.
OBS 2: Crie a função que receba x e n como parâmetros e retorne o valor de S como resultado.
*/

#include <stdio.h>
#include <stdlib.h>

// criando o escopo da função, ela estará completa após o main. Isso é uma norma das boas práticas da programação
float serie(int x, int n); 

int main(){
// primeiro se declara as varíaveis que serão utilizadas
    float x; 
    int n;

    printf("Digiite o numerador: ");
    scanf("%f",&x);
    printf("Digite o numero de termos: ");
    scanf("%d",&n);
// chamada da função dentro do print para imprimir diretamente na tela o valor retornado pela função 
    printf("O valor e: %.2f\n\n",serie(x,n));

    system("PAUSE");
}

/* a função se baseia em um comando for para gerar o somatório n elementos
a variável i representa o denominador e a variável x representa o numerador
na linha 35 caso o numerador seja par ele recebe o valor dele mesmo subtraído 
pela divisão da posição determinada na série se não ele recebe o valor dele mesmo 
somado pela divisão da posição determinada na série. Isso ocorre já que o somatório
é alternado como soma para numeradores pares e subtração para numeradores impares */

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
