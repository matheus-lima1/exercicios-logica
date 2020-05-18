#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){

    setlocale(LC_ALL,"Portuguese");

    int i,num,j,nota=0,cont=0;
    float porcentagem,aux;
    char gabarito[8];

    for(i=0 ; i<8 ; i++){
        printf("Informe a resposta da %d: ",i+1);
        setbuf(stdin, NULL);
        scanf("%c",&gabarito[i]);
    }

    printf("\n\nInforme o numero de alunos: ");
    scanf("%d",&num);

    char respostas[num];


    for(i=0 ; i<num ; i++){
            printf("\n----ALUNO %d----\n",i+1);
        for(j=0 ; j<8 ; j++){
            printf("Resposta da Questão %d = ",j+1);
            setbuf(stdin, NULL);
            scanf("%c",&respostas[j]);

            if(gabarito[j] == respostas[j]){
                nota++;
            }
        }

        if(nota>=6){
            printf("\nAluno %d APROVADO - Nota: %d\n\n",i+1,nota);
            cont++;
        } else {
            printf("\nAluno %d REPROVADO - Nota: %d\n\n",i+1,nota);
        }
        nota=0;
    }



    aux = cont;
    porcentagem = aux/num;

    printf("Porcentagem de aprovação = %.2f por cento",porcentagem*100);



}
