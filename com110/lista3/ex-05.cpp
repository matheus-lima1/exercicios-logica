#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x,res;

    printf("Informe a quantidade de minutos: ");
    scanf("%d",&x);

    res=x*60;
    printf("%d minutos = %d segundos",x,res);

    return 0;

}
