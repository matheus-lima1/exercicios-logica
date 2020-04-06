#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1,n2,n2,maior,meio,menor;

    printf("Informe tres numeros: \n");
    scanf("%lf%lf",&n1,&n2);

    if(n1>n2){
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
    }

    printf("Ordem crescente = %.2lf , %.2lf",menor,maior);

    return 0;
}
