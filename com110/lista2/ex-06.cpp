#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void escreveMenu(){
printf("----MENU----\n");
printf("1) Media aritmetica (n1+n2+n3)/3\n");
printf("2) Media geometrica (n1*n2*n3)^(1/3)\n");
printf("3) Media ponderada (n1*1) + (n2*2) + (n3*3)/6\n\n");
printf("Informe qual operacao deseja realizar: ");
}

int main(){
    double n1,n2,n3,m;
    int op;

    printf("Informe tres numeros: \n");
    scanf("%lf%lf%lf",&n1,&n2,&n3);

    escreveMenu();
    scanf("%d",&op);

    switch(op){
    case 1:
        printf("Media = %.2lf",(n1+n2+n3)/3);
        break;
    case 2:
        printf("Media = %.2lf\n", pow((n1*n2*n3),(double) 1.0/3.0));
        break;
    case 3:
        printf("Media = %.2lf",((n1*1) + (n2*2) + (n3*3))/6);
        break;
    default:
        printf("Informe uma opcao valida\n");
    }
    return 0;
}
