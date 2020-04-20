#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int dn,mn,an,da,ma,aa,idade;

    printf("Dia de nascimento: ");
    scanf("%d",&dn);
    printf("Mes de nascimento: ");
    scanf("%d",&mn);
    printf("Ano de nascimento: ");
    scanf("%d",&an);

    printf("\nDia atual: ");
    scanf("%d",&da);
    printf("Mes atual: ");
    scanf("%d",&ma);
    printf("Ano atual: ");
    scanf("%d",&aa);

    if(ma>mn){
        idade = aa-an;
    } else if(ma==mn && da>=dn){
        idade = aa-an;
    } else{
        idade = (aa-an)-1;
    }
    printf("\nIdade = %d anos",idade);
}
