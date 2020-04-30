#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

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
    printf("## Escolha uma forma geométrica:  ##\n");
    printf("##                                ##\n");
    printf("## 1. Quadrado                    ##\n");
    printf("## 2. Retangulo                   ##\n");
    printf("## 3. Triângulo equilátero        ##\n");
    printf("## 4. Triângulo retângulo         ##\n");
    printf("## 5. Outra                       ##\n");
    printf("## 6. Sair                        ##\n");
    printf("##                                ##\n");

    for(i=0;i<36;i++){
			printf("#");
    };

    printf("\nOpcao: ");

}

void quadrado(){
    //system("cls");
    int i,j,lado;
    float area, perimetro;

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");
    printf("             Quadrado              \n");

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");

    printf("Informe o lado do quadrado: ");
    scanf("%d", &lado);

    area = lado*lado;
    perimetro = lado*4;

    printf("\n");
    printf("Area: %.2f \n", area);
    printf("Perimetro: %.2f \n\n\n", perimetro);

    for(i=0 ; i<2*lado + 2 ; i++){
        printf("-");
    }
    printf("\n");

    for (i=0 ; i<lado ; i++){
        printf("|");

        for(j=0 ; j<lado ; j++){
            printf("@ ");
        }
        printf("| \n");

    }
    for(i=0 ; i<2*lado + 2 ; i++){
        printf("-");
    }
}

void retangulo(){

    int i,j,altura,largura;
    float perimetro, area;

     for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");
    printf("             Retângulo              \n");

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");

    printf("Informe a largura do retângulo: ");
    scanf("%d", &largura);
    printf("Informe a altura do retângulo: ");
    scanf("%d", &altura);

    area = altura*largura;
    perimetro = (largura+altura)*2;

    printf("\n");
    printf("Area: %.2f \n", area);
    printf("Perimetro: %.2f \n\n\n", perimetro);

    for(i=0 ; i<largura*2+2 ; i++){
        printf("-");
    }
    printf("\n");

    for (i=0 ; i<altura ; i++){
        printf("|");

        for(j=0 ; j<largura ; j++){
            printf("@ ");
        }
        printf("| \n");

    }
    for(i=0 ; i<2*largura + 2 ; i++){
        printf("-");
    }
}

void trianguloEquilatero(){

    int i,j,lado,aux;
    float area,perimetro;

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");
    printf("             Triângulo Equilátero              \n");

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");

    printf("Informe o lado do triângulo: ");
    scanf("%d", &lado);

    area = ((lado*lado)*sqrt(3))/4;
    perimetro = lado*3;

    printf("\n");
    printf("Area: %.2f \n", area);
    printf("Perimetro: %.2f \n\n\n", perimetro);

    aux=lado;
    for(i=0 ; i<lado/2 ; i++){
        printf(" ");
    }





}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int opcao;

    exibeMenu();
    scanf("%d",&opcao);

    switch(opcao){
    case 1:
        quadrado();
        break;
    case 2:
        retangulo();
        break;
    case 3:
        trianguloEquilatero();
    }

    return 0;
}
