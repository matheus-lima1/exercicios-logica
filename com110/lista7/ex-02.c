#include <stdio.h>
#include <stdlib.h>

main(){

    int i,j,matriz[2][2],r;

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(i=0 ; i<2 ; i++){
        for(j=i+1 ; j<2 ; j++){
            if(matriz[i][j] == matriz[j][i]){
                r = 0;
            } else {
                r = 1;
            }
        }
    }

    if(r==0){
        printf("\nTRANSPOSTA");
    }else{
        printf("\nNAO TRANSPOSTA");
    }

}
