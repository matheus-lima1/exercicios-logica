#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void imprimeMenu(){
    printf("----------MENU-----------\n");
    printf("Opção 1) Selecionar\n");
    printf("Opção 2) Selecionar\n");
    printf("Opção 3) Selecionar\n");
    printf("Informe o numero da opção: ");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    imprimeMenu();
    scanf("%d",&x);

    while(x>3 || x<1){
        printf("Informe um valor válido: ");
        scanf("%d",&x);
    }
    return 0;
}
