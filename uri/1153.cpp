#include <stdio.h>
#include <stdlib.h>

main(){

    int i,n,fat;

    scanf("%d",&n);

    for(fat=1; n>1; n--){
        fat = fat * n;
    }

    printf("%d\n",fat);



}
