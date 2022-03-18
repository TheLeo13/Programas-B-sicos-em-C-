//#include <stdio.h>
//#include <stdlib.h>
//#define LINHA 2
//#define COLUNA 2
//
//void multiplica_mat(int mat1[LINHA][COLUNA], int mat2[LINHA][COLUNA]);
//
//int main(){
//    int i, j, mat1[LINHA][COLUNA], mat2[LINHA][COLUNA];
//    srand(time(NULL));
//    for(i=0; i<LINHA; i++)
//        for(j=0; j<COLUNA; j++){
//            mat1[i][j] = rand()%10;
//            mat2[i][j] = rand()%10;
//         }
//    printf("MATRIZ 1\n");
//    for(i=0; i<LINHA; i++){
//        printf("\n");
//        for(j=0; j<COLUNA; j++){
//            printf("\t%d ",mat1[i][j]);
//        }
//    }
//    printf("\nMATRIZ 2");
//    for(i=0; i<LINHA; i++){
//        printf("\n");
//        for(j=0; j<COLUNA; j++){
//            printf("\t%d ",mat2[i][j]);
//        }
//    }
//    multiplica_mat(mat1,mat2);
//
//}
//void multiplica_mat(int mat1[LINHA][COLUNA], int mat2[LINHA][COLUNA]){
//
//    int k1,k2,i,x,matR[LINHA][COLUNA];
//
//    for(k1=0; k1<LINHA; k1++){
//        for(k2=0; k2<COLUNA; k2++){
//            x = 0;
//            for(i=0; i<COLUNA; i++){
//                x+= mat1[k1][i]*mat2[i][k2];
//            }
//            matR[k1][k2] = x;
//        }
//    }
//    printf("\nMATRIZ RESULTANTE");
//    for(k1=0; k1<LINHA; k1++){
//        printf("\n");
//        for(k2=0; k2<COLUNA; k2++){
//            printf("\t%d ",matR[k1][k2]);
//        }
//    }
//}
