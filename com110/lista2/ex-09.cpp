#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double a,b,c,delta,x1,x2,raiz;

    printf("Utilizando a expressao ax^2 + bx + c = 0\n\n");
    printf("Informe o coeficiente a: ");
    scanf("%lf",&a);
    printf("Informe o coeficiente b: ");
    scanf("%lf",&b);
    printf("Informe o coeficiente c: ");
    scanf("%lf",&c);

    delta = (b*b)-(4*a*c);

    if(delta<0){
        printf ("\nDelta = %.2lf\n", delta);
        printf("Não possui raizes reais");
    } else if (delta>0){
        raiz = sqrt(delta);
        x1 = ((-b)+raiz)/(2*a);
        x2 = ((-b)-raiz)/(2*a);

        printf ("\nDelta = %.2lf \n", delta);
        printf("Possui duas raizes reais\nx1 = %.2lf\nx2 = %.2lf",x1,x2);
    } else {
        x1 = -b/2*a;
        printf ("\nDelta = %.2lf\n", delta);
        printf("Possui raizes reais iguais a %.2lf",x1);
    }
    return 0;
}
