#include <stdio.h>
#include <stdlib.h>

main(){

    int linha=2,coluna=2;
    int i,j,x,matriz[2][2],ponto=0;
    int menorLinha[linha], maiorColuna[coluna],maior,menor;

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for(j=0 ; j<coluna ; j++){
        for(i=0 ; i<linha ; i++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
        maiorColuna[j] = maior;
    }

    for(i=0 ; i<linha ; i++){
        for(j=0 ; j<coluna ; j++){
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
            }
        }
        menorLinha[i] = menor;
    }

    for(i=0 ; i<linha ; i++){
        for(j=0 ; j<coluna ; j++){
            if(menorLinha[i] == maiorColuna[j]){
                printf("\nPonto de Sela: Matriz[%d][%d] = %d",i,j,matriz[i][j]);
                ponto++;
            }
        }
    }

    if(ponto == 0){
        printf("Ponto de sela inexistente");
    }

}
