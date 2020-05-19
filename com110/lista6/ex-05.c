#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

    setlocale(LC_ALL,"Portuguese");

    int n,i,cont;
    char palavra[30];

    for(i=0 ; i<30 ;i++){

    palavra[i] = NULL;

    }

    printf("Informe a palavra: ");
    gets(palavra);

    printf("Informe o número N de posições: ");
    setbuf(stdin, NULL);
    scanf("%d",&n);

    printf("\n-------CRIPTOGRAFADO-------\n");

    for(i=0 ; i<30 ;i++){

        int valor = palavra[i]+n;
        if(palavra[i] != NULL){
            printf("%c",valor);
        }

    }







}
