#include <stdio.h>
#include <stdlib.h>

/*

Olimpíada Brasileira de Informática - 2013.

    A cada regua conectada na tomada, um dispositivo a menos pode se conectar
    exceto a ultima regua, que ficara com todos seus slots disponiveis

*/

int main(){

    int a, b, c, d,t;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    t = (a+b+c+d) - 3;

    printf("%d\n",t);

}
