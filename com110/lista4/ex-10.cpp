#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float v,vm;

    printf("Informe a velocidade: ");
    scanf("%f",&v);

    printf("Informe a velocidade maxima: ");
    scanf("%f",&vm);

    if(v<=vm){
        printf("Não houve multa");
    } else if(v<=(vm*0.2)+vm){
        printf("O valor da multa é R$ 85,13");
    } else if(v>(vm*0.5)+vm){
        printf("O valor da multa é R$ 574,62");
    } else {
        printf ("O valor da multa é R$ 127,69");
    }

    return 0;
}
