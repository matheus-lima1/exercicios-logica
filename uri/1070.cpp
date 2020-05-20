#include <stdio.h>
#include <stdlib.h>

main(){

    int i,x;

    scanf("%d",&x);

    if(x%2 == 1){
        for(i=x ; i<x+11; i = i+2){
            printf("%d\n",i);
        }
    } else {

        for(i=x+1 ; i<x+12; i = i+2){
            printf("%d\n",i);
        }

    }

}
