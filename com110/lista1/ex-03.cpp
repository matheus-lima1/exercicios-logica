#include <stdio.h>
#include <stdlib.h>

int main(){

    double s, sf;

    printf("Informe o salário inicial:\n");
    scanf("%lf",&s);

    sf = (s*0.25) + s;
    printf("O salario com o aumento de 25 por cento subiu para: %.2lf",sf);

    return 0;
}
