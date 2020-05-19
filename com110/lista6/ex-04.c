#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

    char palavra[10],inverso[10];
    int i;

    printf("Informe a palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);

    printf("Inverso da palavra:\n");
    for(i=10 ; i>0 ; i--){
        printf("%c",palavra[i-1]);
    }
}
