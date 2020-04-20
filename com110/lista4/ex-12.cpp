#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i=0;

    while(i<20){
        printf ("%d ",i+1);
        i++;
    }
    printf("\n");
    while(i>0){
        printf ("%d ",i);
        i--;
    }
    printf("\n");
    while(i<20){
        if((i%2)==1){
        printf ("%d ",i);
        }
        i++;
    }

    return 0;
}
