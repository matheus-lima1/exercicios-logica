#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int i,x,y,c=0;

    scanf("%d%d",&x,&y);

    for(i=1 ; i<=y ; i++){
        c++;
        if(c!=x){
            printf("%d ",i);
        } else {
            printf("%d",i);
            printf("\n");
            c=0;
        }
    }


    return 0;
}
