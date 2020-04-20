#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n,i,result;

    printf("Informe o  numero de potências a ser calculada: ");
    scanf("%d",&n);

    for (i=0 ; i<=n ; i++){

        result = (3,i);
        printf("3^%d = %d\n",n,result);

    }

    return 0;

}
