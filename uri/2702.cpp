#include <stdio.h>
#include <stdlib.h>

main(){

    int i, num[3], pedido[3],cont=0;

    for(i=0 ; i<3 ; i++){
        scanf("%d",&num[i]);
    }
    for(i=0 ; i<3 ; i++){
        scanf("%d",&pedido[i]);
    }

    for(i=0 ; i<3 ; i++){
        if(pedido[i] > num[i]){
            cont = cont + (pedido[i] - num[i]);
        }
    }

    printf("%d\n",cont);



}
