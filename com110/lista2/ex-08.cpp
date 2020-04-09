#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1,n2,n3,maior,menor,meio;

    printf("Informe tres numeros: \n");
    scanf("%lf%lf%lf",&n1,&n2,&n3);

    if(n1>=n2 && n1>=n3 && n2>=n3){
        maior = n1;
        meio = n2;
        menor = n3;
    } else if(n1>=n2 && n1>=n3 && n3>=n2){
        maior = n1;
        meio = n3;
        menor = n2;
    }else if(n2>=n1 && n2>=n3 && n3>=n1){
        maior = n2;
        menor = n1;
        meio = n3;
    }else if(n2>=n1 && n2>=n3 && n1>=n3){
        maior = n2;
        menor = n3;
        meio = n1;

    }else if (n3>=n1 && n3>=n2 && n1>=n2){
        maior = n3;
        menor = n2;
        meio = n1;
    }else if (n3>=n1 && n3>=n2 && n2>=n1){
        maior = n3;
        menor = n1;
        meio = n2;
    }
    printf("Ordem crescente = %.2lf -> %.2lf -> %.2lf",menor,meio,maior);
    return 0;
}
