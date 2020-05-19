#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

    int i,j,vetor[5],cont=1,valores=0,z=0,valor;

    for(i=0 ; i<5 ; i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&vetor[i]);

        if(vetor[i] == 0){
            z++;
        }
    }


    printf("\n---SORTEADOS---\n");

    for(i=0 ; i<5 ; i++){
        printf("%d\n",vetor[i]);
    }

    for(i=0 ; i<5 ; i++){
        cont=0;
        valor = vetor[i];
         for(j=0;j<9;j++){
            if((valor==vetor[j]) && (i!=j) && (valor!=0)){
                cont++;
                vetor[j]=0;
            }
        }

        if(vetor[i]!=0){
                printf("\nO valor %d apareceu = %d vezes\n",vetor[i],cont);
        }
    }

    if(z > 0){
       printf("O valor 0 apareceu = %d vezes\n",z);
    }

}


