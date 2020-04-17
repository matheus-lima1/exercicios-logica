#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int i=0,x;

        printf("#######################\n");
        for (x=0 ; x<2; x++){
        printf("#                     #\n");
        }
        printf("#    SEJA BEM-VINDO   #\n");
        for (x=0 ; x<2; x++){
        printf("#                     #\n");
        }
        printf("#######################\n");

    return 0;
}
