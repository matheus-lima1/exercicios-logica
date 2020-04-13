#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int i=0,x;


        while(i!=50){
            printf("#");

            if(i==24){
                printf("\n#                       #\n");
                printf("#                       #\n");
                printf("#     SEJA BEM-VINDO    #\n");
                printf("#                       #\n");
                printf("#                       #\n");
            }


            i++;
        }


        /*
        printf("#######################\n");
        for (x=0 ; x<2; x++){
        printf("#                     #\n");
        }
        printf("#    SEJA BEM-VINDO   #\n");
        for (x=0 ; x<2; x++){
        printf("#                     #\n");
        }
        printf("#######################\n");
        */

    return 0;
}
