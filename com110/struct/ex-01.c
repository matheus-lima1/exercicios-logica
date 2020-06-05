#include <stdio.h>
#include <stdlib.h>


struct pessoas{

    char sexo[2];
    char olhos[2];
    char cabelo[2];
    int idade;

};

void zeraMatriz(int n,int matriz[n][n]){

    int i,j;

    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){

         matriz[i][j] = 0;

        }
    }

}

void printaMatriz(int n,int matriz[n][n]){

    int i,j;

    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
         printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

}



main(){

    int i,j,n,valor1,valor2,idade=0,maior=0,sexo,olhos,cabelo,loiras=0;

    float media=0,cont=0;

    printf("Informe a quantidade de habitantes: ");
    scanf("%d",&n);

    struct pessoas vetor[n];
    int matriz[n][n];

    zeraMatriz(n,matriz);

    for(i=0 ; i<n ; i++){

        setbuf(stdin,NULL);


        printf("[Pessoa %d] Sexo: ",i+1);
        scanf("%s",vetor[i].sexo);

        printf("[Pessoa %d] Cor dos olhos: ",i+1);
        scanf("%s",vetor[i].olhos);

        printf("[Pessoa %d] Cor do cabelo: ",i+1);
        scanf("%s",vetor[i].cabelo);

        printf("[Pessoa %d] Idade: ",i+1);
        scanf("%d",&vetor[i].idade);

        printf("\n");

        valor1 = strcmp (vetor[i].olhos, "C");
        valor2 = strcmp (vetor[i].cabelo, "P");

        if (valor1 == 0 && valor2 == 0){

            idade = idade+vetor[i].idade;
            cont = cont+1;

        }

        if(vetor[i].idade > maior){
            maior = vetor[i].idade;
        }

        sexo = strcmp(vetor[i].sexo, "F");
        olhos = strcmp(vetor[i].olhos, "A");
        cabelo = strcmp(vetor[i].cabelo, "L");

        if (sexo==0 && vetor[i].idade>18 && vetor[i].idade<=35 && olhos == 0 && cabelo ==0){
            loiras++;
        }

        for(j=0 ; j<n ; j++){

         if(i==j){
            matriz[i][j] = vetor[i].idade;
         }

    }

    media = idade/cont;

    if(cont == 0){
        media = 0;
    }

}

    printf ("\n\nMedia de idades das pessoas com cabelos pretos e olhos castanhos = %.2f anos \n", media);
    printf ("\nA maior idade: %d anos\n", maior);
    printf ("\nPessoas do sexo feminino com idade entre 18 e 35 anos e que tenham olhos azuis e cabelos louros: %d\n\n", loiras);

    printaMatriz(n,matriz);

}



