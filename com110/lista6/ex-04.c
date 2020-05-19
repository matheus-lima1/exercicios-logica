#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

    char palavra[10],inverso[10];
    int i;


    for(i=0 ; i<10 ; i++){
        palavra[i] = NULL;
    }

    printf("Informe a palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);


    printf("\nInverso da palavra:\n");
    for(i=10 ; i>0 ; i--){

        if(palavra[i-1]!=NULL){
        printf("%c",palavra[i-1]);
        }
    }
}
