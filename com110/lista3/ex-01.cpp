#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x,i,result;

    printf("Informe o valor: ");
    scanf("%d",&x);

    for(i=0 ; i<9 ; i++){

        result = pow(x,i);
        printf("%d\n",result);

    }

    return 0;

}
