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

struct jogador{

    char nome[30];
    int pontos;

};


void exibeMenu(){
    int i;

    for(i=0 ; i<36 ; i++){
        printf("#");
    }

    printf("\n");
    printf("######### SEJA BEM VINDO ########### \n");

    for(i=0;i<36;i++){
			printf("#");
    }

    printf("\n##");

    for(i=0;i<32;i++){
			printf(" ");
    }

    printf("## \n");
    printf("##                                ##\n");
    printf("## 1. Jogar                       ##\n");
    printf("## 2. Ver rankig                  ##\n");
    printf("## 3. Sair                        ##\n");
    printf("##                                ##\n");
    printf("##                                ##\n");

    for(i=0;i<36;i++){
			printf("#");
    };

    printf("\nOpcao: ");

}

void printaMatriz(int matriz[4][4]){

    int i,j;

    for(i=0 ; i<4 ; i++){
            printf("\n");
        for(j=0 ; j<4 ; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

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


main(){

    int i,opcao,valores[8],matriz[4][4],matrizJogo[4][4];


    do{
        exibeMenu();
        scanf("%d",&opcao);

        system("cls");

        switch(opcao){
        case 1:
            geraValores(matriz);
            geraValores2(matriz);
            printaMatriz(matriz);

            // esperar tempo

        }



    } while (opcao!=3);

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









