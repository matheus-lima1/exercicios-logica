#include <stdio.h>
#include <stdlib.h>

main(){

    int i, j,vetor[8],aux;

    for(i=0 ; i<8 ; i++){
        vetor[i] = NULL;
    }

    for(i=0 ; i<8 ; i++){
       printf("Vetor[%d]: ",i);
       scanf("%d",&vetor[i]);
    }

    for(i=0 ; i<8 ; i++){
        for(j=0 ; j<8 ; j++){
            if(vetor[i]<vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\n-----ORDENANDO-----\n");

    for(i=0 ; i<8 ; i++){
       printf("\nVetor[%d]: %d",i,vetor[i]);

    }

}
