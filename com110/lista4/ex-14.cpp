#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,y,aux,menor;
    int maior=0;

    do{
        aux = x;

        printf("Informe um valor: ");
        scanf("%d",&x);
        if(x>maior){
            maior = x;
        }
        if(x<menor && x>0){
            menor = x;
        }

    }while(x>0);

    printf("\nO maior foi = %d",maior);
    printf("\nO menor foi = %d", x);
    printf("\nO menor positivo foi = %d", menor);

    return 0;
}
