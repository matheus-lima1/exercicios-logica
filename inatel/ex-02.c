#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int verifica(float lado1, float lado2, float lado3);
 void retangulo(float num1, float num2, float num3);

main(){

    float valor1, valor2, valor3;

    printf("Informe o valor do lado 1: ");
    scanf("%f",&valor1);

    printf("Informe o valor do lado 2: ");
    scanf("%f",&valor2);

    printf("Informe o valor do lado 3: ");
    scanf("%f",&valor3);

    if(verifica(valor1, valor2, valor3) == 0){
        printf("Podem ser lados de um triangulo!!\n");
        retangulo(valor1,valor2,valor3);
    } else {
        printf("Nao podem ser lados de um triangulo\n");
    }

}

int verifica(float lado1, float lado2, float lado3){

    float absoluto,aux;
    absoluto = fabs(lado2-lado3);

    if(lado1<(lado2+lado3) && lado1>absoluto){
        return 0;
    }

    return 1;

}

void retangulo(float num1, float num2, float num3){

    float h,c1,c2;

    if(num1>num2 && num1>num3){
        h = num1*num1;
        c1 = num2*num2;
        c2 = num3*num3;

        if(h == c1+c2){
            printf("Retangulo!!\n");
        }
        printf("Hipotenusa = %.2f",num1);
    }

    if(num2>num1 && num2>num3){
        h = num2*num2;
        c1 = num1*num1;
        c2 = num3*num3;

        if(h == c1+c2){
            printf("Retangulo!!\n");
        }
        printf("Hipotenusa = %.2f",num1);
    }

    if(num3>num2 && num3>num1){
        h = num3*num3;
        c1 = num2*num2;
        c2 = num1*num1;

        if(h == c1+c2){
            printf("Retangulo!!\n");
        }
        printf("Hipotenusa = %.2f",num3);
    }

}
