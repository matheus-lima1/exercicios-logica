#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,i;

    printf("Informe o primeiro valor: ");
    scanf("%d",&a);
    printf("Informe o segundo valor: ");
    scanf("%d",&b);

    for(i=a ; i<=b ; i++){
        printf("%d ",i);
    }

    return 0;
}
