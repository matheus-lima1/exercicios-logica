#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaIMC(float massa, float altura){
    return massa/(altura*altura);
}

int main(){

    float a,m;

    printf("Informe a altura (Em m): ");
    scanf("%f",&a);
    printf("Informe a massa(Em Kg): ");
    scanf("%f",&m);

    printf("IMC = %.2f",calculaIMC(m,a));

    return 0;

}
