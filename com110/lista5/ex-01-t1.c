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
    aux=lado;

    printf("\n");
    printf("Area: %.2f \n", area);
    printf("Perimetro: %.2f \n\n\n", perimetro);

    for(i=0 ; i<lado ; i++){
        printf(" ");
    }
    printf(" .\n");
    for(i=0 ; i<lado ; i++){
        printf(" ");
    }
    printf("/ \\ \n");

    for(i=0 ; i<lado+1 ; i++){
            aux = aux-1;
        for(j=0 ; j<aux+1 ; j++){
            printf(" ");
        }
        printf("/");

        for(j=0 ; j<i ; j++){
            printf(" @");
        }
        printf(" \\");
        printf("\n");

    }

    for(i=0 ; i<2*lado+3;i++){
        printf("-");
    }

}

void trianguloRetangulo(){

    int i,j,lado,h,aux;
    float area,perimetro;

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");
    printf("             Triângulo Retângulo              \n");

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");

    printf("Informe o lado do triângulo(catetos devem ser iguais): ");
    scanf("%d", &lado);


    area = (lado*lado)/2;
    h = (lado*lado)+(lado*lado);
    perimetro = sqrt(h);

    printf("\n");
    printf("Area: %.2f \n", area);
    printf("Perimetro: %.2f \n\n\n", perimetro);

    printf("|\\\n");

    for(i=1 ; i<lado ;i++){
        printf("|");
        for(j=1 ; j<=i ; j++){
            printf("@");
        }
        printf("\\\n");
        aux = aux-1;
    }
    printf("-");
    for(i=0 ; i<lado ; i++){
        printf("-");
    }
}

void outroMenu(){

    int diagonalMaior,i,diagonalMenor,aux,j,x,lado;
    float area,perimetro;

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");
    printf("             Losango              \n");

    for(i=0;i<36;i++){
        printf("=");
    }
    printf("\n");

    printf("Informe o valor do lado do losango: ");
    scanf("%d", &lado);
    printf("Informe o Diâmetro maior: ");
    scanf("%d", &diagonalMaior);
    printf("Informe o Diâmetro menor: ");
    scanf("%d", &diagonalMenor);

    perimetro = lado*4;
    area = (diagonalMaior*diagonalMenor)/2;


    printf("\n");
    printf("Area: %.2f \n", area);
    printf("Perimetro: %.2f \n\n\n", perimetro);

    for(i=0; i<=(2*lado)+2; i++){
        if(i==lado+2){
            printf(".");
       }else{
            printf(" ");
        }
    }

    printf("\n");

    for(i=0; i<=(2*lado)+2; i++){
        if(i==lado+1){
            printf("/ \\");
       }else{
            printf(" ");
       }
    }

    printf("\n");

    for(i=0; i<lado; i++){
        for(x=0; x<=lado-i-1; x++){
                printf(" ");
        }

        printf("/ ");
        for(j=0; j<=i; j++){
            printf("@ ");

        }

        printf("\\");
        printf("\n");
    }

    for(i=lado; i>0; i--){
        for(x=lado ; x>=i+1 ; x--){
            printf(" ");
        }

        printf(" \\ ");

        for(j=i; j>0; j--){

            printf("@ ");

        }

        printf("/\n");
    }

    for(i=(2*lado)+1; i>=0; i--){

        if(i==lado){
            printf("\\ /");
        }else{
            printf(" ");
            }
    }

    printf("\n");

    for(i=(2*lado)+2; i>=0; i--){
        if(i==lado){
            printf(".");
        }else{
            printf(" ");
            }
    }

    printf("\n");


}



int main(){

    setlocale(LC_ALL,"Portuguese");

    int opcao;


    printf("\n\n");
    do{
    printf("\n");
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
        break;
    case 4:
        trianguloRetangulo();
        break;
    case 5:
        outroMenu();
        break;
    case 6:
        break;
    default:
        printf("Informe uma opção correta.");
        break;
    }

    } while(opcao!=6);

    return 0;
}
