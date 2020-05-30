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

int validaValores(int vetor[8], int valor){

    int i;

    for(i=0 ; i<8 ; i++){
        if(vetor[i]==valor){
            return 1;
        }
    }

    return 0;

}

int geraValores(int vetor[8]){

    int i,aux;

    srand(time(NULL));

    for(i=0 ; i<8 ; i++){
        aux = rand()%10;
        while(validaValores(vetor,aux)==1){
            aux = rand()%10;
        }
        vetor[i] = aux;
        printf("%d ",vetor[i]);
    }

    return vetor;
}


main(){

    int i,opcao,valores[8];


    do{
        exibeMenu();
        scanf("%d",&opcao);

        system("cls");

        geraValores(valores);


    } while (opcao!=2);

}







