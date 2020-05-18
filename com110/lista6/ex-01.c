#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    int i,j,vetor[8],aux;

    for(i=0 ; i<8 ; i++){
        printf("Informe um valor para a posição %d: ",i);
        scanf("%d",&vetor[i]);
    }

    for(i=0 ; i<8 ; i++){
        for(j=i+1 ; j<8 ; j++){

            if(vetor[i]>=vetor[j]){

                aux = vetor[j];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(i=0 ; i<8 ; i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }

    return 0;

}
