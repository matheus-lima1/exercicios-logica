#include <stdio.h>
#include <stdlib.h>

main(){

    int i,j,n=0,total=0;
    scanf("%d",&n);

    int valor[n*2];

    for(i=0 ; i<n ; i++){
        scanf("%d",&valor[0]);
        scanf("%d",&valor[1]);

        total = total+(valor[0]*valor[1]);

    }

    printf("%d\n",total);



}
