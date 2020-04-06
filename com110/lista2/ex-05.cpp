#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;

    printf("Informe a idade da pessoa: ");
    scanf("%d",&idade);

    if(idade<16){
        printf("Nao Eleitor");
    } else if(idade>=18 && idade<=65){
        printf("Eleitor obrigatorio");
    } else {
        printf("Eleitor facultativo");
    }

    return 0;
}
