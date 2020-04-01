#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[100];
    double fixo,vendas ,salario;

    scanf("%s%lf%lf",&nome,&fixo,&vendas);
    salario = (vendas*0.15) + fixo;

    printf("TOTAL = R$ %.2lf\n",salario);



    return 0;
}
