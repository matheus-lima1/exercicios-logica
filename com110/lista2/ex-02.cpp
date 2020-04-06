#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1,n2,n3,maior,menor;

    printf("Informe os tres numeros:\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    if (n1>=n2 && n1>=n3){
        printf("MAIOR = %d\n",n1);
    } else if (n2>=n1 && n2>=n3){
        printf("MAIOR = %d\n",n2);
    } else {
        printf("MAIOR = %d\n",n3);
    }

    if (n1<=n2 && n1<=n3){
        printf("MENOR = %d\n",n1);
    } else if (n2<=n1 && n2<=n3){
        printf("MENOR = %d\n",n2);
    } else {
        printf("MENOR = %d\n",n3);
    }

    return 0;
}
