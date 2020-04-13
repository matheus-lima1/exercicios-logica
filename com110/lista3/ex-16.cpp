#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,i,x;

    printf("Informe o primeiro valor: ");
    scanf("%d",&a);
    printf("Informe o segundo valor: ");
    scanf("%d",&b);

    for (i=a ; i<=b ; i++){
        for(x=0 ; x<11 ; x++){
            printf("%d * %d = %d\n",i,x,i*x);
        }
    }

    return 0;
}
