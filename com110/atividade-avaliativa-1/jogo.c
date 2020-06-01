#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


/*

IF-ELSE (ok)
WHILE-FOR (ok)
VETOR,MATRIZ (ok)
FUNÇÃO COM PARÂMETRO(ok)
ARQUVIO E REGISTRI (NÃO)

*/

void exibeMenu(){

    printf("\n\n########## MENU ##########\n");
    printf("       1 - Jogar          \n");
    printf("       2 - Sair           \n");
    printf("Escolha uma alternativa: ");

}

void printaMatriz(int matriz[4][4]){

    int i,j;

    for(i=0 ; i<4 ; i++){
            printf("\n");
        for(j=0 ; j<4 ; j++){
            printf("%d - ",matriz[i][j]);
        }
    }

}

int validaValores(int  matriz[4][4], int valor){

    int i,j;

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<4 ; j++){
           if(matriz[i][j]==valor){
            return 1;
        }
    }
}

    return 0;

}

int validaValores2(int  matriz[4][4], int valor){

    int i,j;

    for(i=2 ; i<4 ; i++){
        for(j=0 ; j<4 ; j++){
           if(matriz[i][j]==valor){
            return 1;
        }
    }
}

    return 0;

}


int geraValores(int matriz[4][4]){

    int i,j,aux;

    srand(time(NULL));

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<4 ; j++){
            aux = rand()%9;

            while(validaValores(matriz,aux)==1){
                aux = rand()%9;
            }

            matriz[i][j] = aux;
    }
}

    return matriz;
}

int geraValores2(int matriz[4][4]){

    int i,j,aux,padrao;

    padrao = rand()%10;

    srand(time(NULL));

    for(i=2 ; i<4 ; i++){
        for(j=0 ; j<4 ; j++){
            aux = padrao*rand()%9;

            while(validaValores2(matriz,aux)==1){
                aux = padrao*rand()%9;
            }

            matriz[i][j] = aux;
    }
}

    return matriz;
}


int zeraMatriz(int matriz[4][4]){

    int i,j;

    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<4 ; j++){
            matriz[i][j] = 0;
        }
    }

    return matriz;
}


main(){

    int i,opcao,valores[8],matriz[4][4];


    do{
        exibeMenu();
        scanf("%d",&opcao);

        system("cls");

        zeraMatriz(matriz);
        geraValores(matriz);
        geraValores2(matriz);
        getch();
        printaMatriz(matriz);



    } while (opcao!=2);

}







