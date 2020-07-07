#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


/*
IF-ELSE (ok)
WHILE-FOR (ok)
VETOR,MATRIZ (ok)
FUNÇÃO COM PARÂMETRO(ok)
ARQUVIO E REGISTRI (ok)
*/


// Registro que se representa o jogador
struct jogador{

    char nome[30];
    int pontos;

};

//função que exibe o menu de opções
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

//função que gera valores aleatórios para a primeira parte da matriz
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

//função que gera valores aleatórios para a segunda parte da matriz
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

   //return matriz;
}

// função que imprime a matriz principal do jogo
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

//função que verifica se os valores da primeira parte não se repetem
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

//função que verifica se os valores da segunda parte não se repetem
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


// função que roda as tentativas do jogador
int tentativa(int linha, int coluna, int linha2, int coluna2, int matrizJogo[4][4],int matriz[4][4],int pontos){


    while(pontos<8){

            printf("Informe a Linha do elemento que deseja exibir: ");
            scanf("%d",&linha);
            printf("Informe a Coluna do elemento que deseja exibir: ");
            scanf("%d",&coluna);

            matrizJogo[linha][coluna] = matriz[linha][coluna];
            system("cls");
            printaMatriz(matrizJogo);

            printf("Informe a Linha do segundo elemento que deseja exibir: ");
            scanf("%d",&linha2);
            printf("Informe a Coluna do segundo elemento que deseja exibir: ");
            scanf("%d",&coluna2);

            matrizJogo[linha2][coluna2] = matriz[linha2][coluna2];
            system("cls");
            printaMatriz(matrizJogo);

            if(matrizJogo[linha][coluna] == matrizJogo[linha2][coluna2] ){
                printf("+1 Ponto !\n");
                pontos++;
                printf("Pontos: %d\n",pontos);
                return tentativa(linha,coluna,linha2,coluna2,matrizJogo,matriz,pontos);

            } else {
                printf("Errado!\n");
                matrizJogo[linha][coluna] = 0;
                matrizJogo[linha2][coluna2] = 0;
                return tentativa(linha,coluna,linha2,coluna2,matrizJogo,matriz,pontos);
            }
    }

               FILE *arq;
  int i;
  char nome[50];
  int result;
   printf("Digite seu nome:  ");
            scanf("%s",&nome);
  //clrscr();
  arq = fopen("pontos.txt", "a");  // Cria um arquivo texto para gravação
  if (arq == NULL) // Se nào conseguiu criar
  {
     printf("Problemas na CRIACAO do arquivo\n");
    // return;
  }
  for (i = 0; i<1;i++)
  {
// A funcao 'fprintf' devolve o número de bytes gravados
// ou EOF se houve erro na gravação
      result = fprintf(arq," %s -->  %d\n",nome,pontos);
      if (result == EOF)
	  printf("Erro na Gravacao\n");
  }
  fclose(arq);

    return pontos;

}

// elimina possíveis zeros que restarem de quando a matriz foi zerada
void excluiZero(int matriz[4][4]){

    int i,j;

    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<4 ; j++){
            if(matriz[i][j] == 0){
                matriz[i][j] = 8;
            }
        }
    }

}

// função que atribui 0 aos valores da matriz
int zeraMatriz(int matriz[4][4]){

    int i,j;

    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<4 ; j++){
            matriz[i][j] = 0;
        }
    }

   // return matriz;
}

void ranking(){
	FILE *arq;
	char texto_str[20];

  //abrindo o arquivo_frase em modo "somente leitura"
  arq = fopen("pontos.txt", "r");

  //enquanto não for fim de arquivo o looping será executado
  //e será impresso o texto
  while(fgets(texto_str, 20, arq) != NULL)
  printf("%s", texto_str);

  //fechando o arquivo
  fclose(arq);

  getch();

}


main(){

    int i,opcao,valores[8],matriz[4][4],matrizJogo[4][4];
    int linha,coluna,linha2,coluna2,pontos=0;


    do{
        exibeMenu();
        scanf("%d",&opcao);

        system("cls");

        switch(opcao){
        case 1:
            geraValores(matriz);
            geraValores2(matriz);
            excluiZero(matriz);
            zeraMatriz(matrizJogo);
            printaMatriz(matriz);
            printaMatriz(matrizJogo);

            tentativa(linha,coluna,linha2,coluna2,matrizJogo,matriz,pontos);

        case 2: ranking();



        }



    } while (opcao!=3);
	}
