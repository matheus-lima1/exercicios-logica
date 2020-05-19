#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

main(){

    setlocale(LC_ALL,"Portuguese");

    int n,i;
    char palavra[30];

    printf("Informe a palavra: ");
    gets(palavra);

    printf("Informe o número N de posições: ");
    scanf("%d",&n);

    for(i=0 ; i<30 ;i++){

        printf("%c",(palavra[i])+n);


    }



}
