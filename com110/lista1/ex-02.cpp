#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1,n2,n3,p1,p2,p3,m,peso;

    printf("Informe as três notas:\n");
    scanf("%lf%lf%lf",&n1,&n2,&n3);

    printf("Informe os pesos referentes as notas 1,2 e 3 respectivamente:\n");
    scanf("%lf%lf%lf",&p1,&p2,&p3);

    peso = p1+p2+p3;

    m = ((n1*p1) + (n2*p2) + (n3*p3))/ peso ;

    printf("Media ponderada = %.2lf\n",m);

    return 0;
}
