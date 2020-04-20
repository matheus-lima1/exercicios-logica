#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a,b,x;

    printf("Informe o primeiro valor: ");
    scanf("%f",&a);
    printf("Informe o segundo valor: ");
    scanf("%f",&b);

    printf("%.2f + %.2f = %.2f\n",a,b,a+b);
    printf("%.2f - %.2f = %.2f\n",a,b,a-b);
    printf("%.2f * %.2f = %.2f\n",a,b,a*b);
    printf("%.2f / %.2f = %.2f\n",a,b,a/b);

    return 0;

}
