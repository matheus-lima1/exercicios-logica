#include <stdio.h>
#include <stdlib.h>

struct consumidor{

    int numero;
    float gasto;
    char codigo[2];
    float total;

};

main(){

    int i,n, numMaior, contC=0, contR=0, aux,index;
    float maior=0, consumoC=0, consumoR=0;

    printf("Informe o numero de consumidores: ");
    scanf("%d",&n);

    struct consumidor vetor[n];

    for(i=0 ; i<n ; i++){

        printf("[Consumidor %d] Numero: ",i+1);
        scanf("%d",&vetor[i].numero);

        printf("[Consumidor %d] Gasto: ",i+1);
        scanf("%f",&vetor[i].gasto);

        setbuf(stdin,NULL);

        printf("[Consumidor %d] Codigo: ",i+1);
        scanf("%s",&vetor[i].codigo);

        vetor[i].total = vetor[i].gasto*0.72;

        if(vetor[i].total>maior){
            maior = vetor[i].total;
            numMaior = vetor[i].numero;
            index = i;
        }

        aux = strcmp(vetor[i].codigo, "C");

        if(aux == 0){
            consumoC = consumoC + vetor[i].total;
            contC++;
        } else {
           consumoR = consumoR + vetor[i].total;
           contR++;
        }

        printf("\n[Consumidor %d] Total = %.2f reais\n\n",i+1 ,vetor[i].total);

    }

    consumoC = consumoC/contC;
    consumoR = consumoR/contR;

    if(contR==0){
        consumoR =0 ;
    }
    if(contC==0){
        consumoC =0 ;
    }



    printf("[Consumidor de numero %d] Maior gasto = %.2f reais! Tipo %s\n",numMaior, maior,vetor[index].codigo);
    printf("Percentual de consumo(R$) R: %.2f \n",consumoR);
    printf("Percentual de consumo(R$) C: %.2f \n",consumoC);

}


