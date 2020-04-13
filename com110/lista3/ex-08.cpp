#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int h;

    printf("Informe a hora: ");
    scanf("%d",&h);

    if(h>=5 && h<=11){
        printf("Manhã");
    } else if (h>=12 && h<=17){
        printf("Tarde");
    } else {
        printf("Noite");
    }

    return 0;
}
