#include <stdio.h>
#include <stdlib.h>

main(){

    int i,entrada[5], valores[5] = {300, 1500, 600, 1000, 150},total=225;

    for(i=0 ; i<5 ; i++){
        scanf("%d",&entrada[i]);
        total = total + (entrada[i]*valores[i]);
    }

    printf("%d\n",total);

}
