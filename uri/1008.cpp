#include <stdio.h>
#include <stdlib.h>

int main(){

    int num,h;
    double valor,salario;

    scanf("%d%d%lf",&num,&h,&valor);
    salario = h*valor;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,salario);


    return 0;
}
