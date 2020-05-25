#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int matriz[8][8], r=0, i, j;

    printf("entre com os elementos da matriz.\n");

    for(i=0 ; i<8 ; i++){
        for(j=0 ; j<8 ; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            }
    }

    for(i=0 ; i<8 ; i++){
        for(j=0 ; j<8 ; j++){
            if(matriz[i][j] != matriz[j][i]){
                r =1;
                i=8;
                j=8;
            }
        }
    }
    printf("\n");
    for(i=0 ; i<8 ; i++){
        for(j=0 ; j<8 ; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }


    if(r==0){
        printf("\nEla é simetrica!");
    }else{
        printf("\nNão é simetrica!");
    }
}
