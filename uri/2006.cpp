#include <stdio.h>
#include <stdlib.h>

main(){

    int t,i,vetor[5],cont=0;

    scanf("%d",&t);

    for(i=0 ; i<5 ; i++){
        scanf("%d",&vetor[i]);

        if(vetor[i] == t){
            cont++;
        }
    }

    printf("%d\n",cont);

}
