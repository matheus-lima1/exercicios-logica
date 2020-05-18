#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

    int i,j,vetor[5],cont=1,valores=0;

    for(i=0 ; i<5 ; i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&vetor[i]);
    }

    printf("\n---SORTEADOS---\n");

    for(i=0 ; i<5 ; i++){
        printf("%d\n",vetor[i]);
    }

    for(i=0 ; i<5 ; i++){
        cont=1;
        for(j=i+1 ; j<5 ; j++){
            if(vetor[i] == vetor[j] && i!=j){
                cont++;
            }

        }

        printf("O valor %d apareceu %d vezes\n",vetor[i],cont);
    }

}
