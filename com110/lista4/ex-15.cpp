#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i,x;

    printf("Informe um valor: ");
    scanf("%d",&n);

    for(i=0 ; i<=n ; i++){
        for(x=0 ; x<i ; x++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
