#include <stdio.h>
#include <stdlib.h>

main(){

    int i, vetor[5],cont=0;

    for(i=0 ; i<5 ; i++){
        scanf("%d",&vetor[i]);

        if(vetor[i]%2 == 0){
            cont++;
        }
    }
    printf("%d valores pares\n",cont);

}
