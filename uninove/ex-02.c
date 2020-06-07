#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main(){

    // NUMERO DE ALUN OS (NO SEU CASO SERIA 20)
    int x = 3;
    int i, nota[x], notas=0;
    float varia=0, mediaAritmetica=0,aux=0,variancia=0;
    float desvio;

    for(i=0 ; i<x ; i++){

        printf("[Aluno %d] Nota: ",i+1);
        scanf("%d",&nota[i]);

        // SOMA TODAS AS NOTAS
        notas = notas + nota[i];

    }

    // DIVIDE AS NOTAS PELO NUMERO DE ALUNOS
    mediaAritmetica = notas/x;


    for(i=0 ; i<x ; i++){

        // NOTA DO ALUNO - MEDIA ARITMETICA
        varia = nota[i]-mediaAritmetica;

        // RESULTADO ANTERIOR AO QUADRADO
        aux = (varia*varia);

        // SOMA O QUADRADO DO CALCULO DE TODOS OS ALUNOS
        variancia = variancia + aux;

    }

    // DIVIDE O RESULTADO DA SOMA PELO NUMERO DE ALUNOS
    variancia = variancia/x;

    // DESVIO = RAIZ QUADRADA DA VARIANCIA
    desvio = sqrt(variancia);


    printf("\nMedia Aritmetica = %.2f\n",mediaAritmetica);
    printf("Variancia = %.2f\n",variancia);
    printf("Desvio = %.2f\n",desvio);

}
