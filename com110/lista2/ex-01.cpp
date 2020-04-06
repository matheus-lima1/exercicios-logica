#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double c1,c2,x,h;

    printf("Informe o valor dos dois catetos:\n");
    scanf("%lf%lf",&c1,&c2);

    x = (c1*c1) + (c2*c2);
    h = sqrt(x);

    printf("Hipotenusa = %.2lf",h);


    return 0;
}
