#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1,n2,n3,n4,m;

    printf("Informe as quatro notas:\n");
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);

    m = (n1+n2+n3+n4)/4;

    if(m>=6){
        printf("aluno APROVADO com media = %.2lf",m);
    } else {
        printf("aluno REPROVADO com media = %.2lf",m);
    }

    return 0;
}
