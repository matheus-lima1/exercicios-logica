#include <stdio.h>
#include <stdlib.h>

main(){

    int i,j, matriz[2][2];

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    int maior = matriz[0][0];

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            if(matriz[i][j] > maior){
                maior=matriz[i][j];
            }
        }
    }

    printf("\n");

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("Matriz[%d][%d] * %d = %d\n",i,j,maior,matriz[i][j]*maior);
        }
    }



}
