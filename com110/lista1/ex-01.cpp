#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1,n2,n3,m;

    printf("Informe as três notas:\n");
    scanf("%lf%lf%lf",&n1,&n2,&n3);

    m = (n1+n2+n3)/3 ;

    printf("Media = %.2lf\n",m);

    return 0;
}
