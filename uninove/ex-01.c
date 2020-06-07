#include <stdio.h>
#include <stdlib.h>


// CRIA UM MODELO DE PEDESTRE
struct pedestre{

    int idade;
    char genero[2];
    float salario;

};

main(){

    int i, aux,cont=0;
    float mediaIdade=0, mediaSalario=0;

    // DECLARA UM VETOR DO TIPO PEDESTRE
    struct pedestre vetor[3];

    // LAÇO DE REPETIÇÃO (FIZ COM 3, MAS SERIA 30 NO SEU CASO)
    for(i=0 ; i<3 ; i++){

        printf("[Pedestre %d] Idade: ",i+1);
        scanf("%d",&vetor[i].idade);

        // LIMPAR O BUFFER DO TECLADO, EXIGIDO NA LINGUAGEM C
        setbuf(stdin,NULL);

        printf("[Pedestre %d] Genero: ",i+1);
        scanf("%s",&vetor[i].genero);

        printf("[Pedestre %d] Salario: ",i+1);
        scanf("%f",&vetor[i].salario);
        printf("\n");

        // ESSA FUNÇÃO RETORNA "0" QUANDO O GENERO FOR "M"
        // E SE FOR DIFERENTE DE "M", RETORNA 1
        aux = strcmp(vetor[i].genero, "M");

        if(aux==0){
            //SOMA O SALARIO DE TODOS DO GENERO M
            mediaSalario = mediaSalario + vetor[i].salario;

            //  CONTA QUANTOS PEDESTRES SÃO DO GENERO M
            cont++;
        }

        //SOMA A IDADE DE TODO MUNDO
        mediaIdade = mediaIdade + vetor[i].idade;

    }

    mediaSalario = mediaSalario/cont;
    mediaIdade = mediaIdade/3;

    printf("Media de idade = %.2f anos\n",mediaIdade);
    printf("Media de salario(M) = %.2f reais\n",mediaSalario);

}
