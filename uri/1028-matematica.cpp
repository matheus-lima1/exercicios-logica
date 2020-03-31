#include <stdio.h>
#include <stdlib.h>

// TRATANDO MDC POR RECURSIVIDADE

int calculaMDC(int num1, int num2){

    if(num2 == 0){
        return num1;
    } else {
        return calculaMDC(num2, num1%num2);
    }

}

int main(){

    int i,n,f1,f2,res;

    scanf("%d",&n);

    for (i=0 ; i<n ; i++){
        scanf("%d%d",&f1,&f2);
        res = calculaMDC(f1,f2);
        printf("%d\n",res);
    }

    return 0;

}
