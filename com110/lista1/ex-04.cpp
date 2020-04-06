#include <stdio.h>
#include <stdlib.h>

int main(){

    double s,sf,aumento;

    printf("Informe o salario inicial:\n");
    scanf("%lf",&s);

    printf("Informe o percentual de aumento:\n");
    scanf("%lf",&aumento);

    sf = ((aumento/100)*s)+s;

    printf("Salario final = %.2lf",sf);

    return 0;
}
