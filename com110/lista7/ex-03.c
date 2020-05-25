#include <stdio.h>
#include <stdlib.h>

main(){

    int i,j,menor,linha=0,coluna;
    float matriz[4][7],minmax;

    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<7 ; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

    menor = matriz[0][0];

    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<7 ; j++){
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
                linha = i;
            }
        }
    }
    minmax = matriz[linha][0];
    for(j=0 ; j<7 ; j++){
        if(matriz[linha][j] > minmax){
            minmax = matriz[linha][j];
            coluna = j;
        }
    }

    printf("\nMINMAX: Matriz[%d][%d] = %.2f",linha,coluna,minmax);


}
