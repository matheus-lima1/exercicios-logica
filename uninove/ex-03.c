#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// FUNÇÃO QUE RETORNA O FATORIAL DE UM NUMERO
int fatorial(int n){
    int fat;

    for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;
    }

    return fat;

}

main(){

    int alunos, elementos,i;
    long int divisor, dividendo, aux,dividendo1;
    float maneiras;

    printf("Informe a quantidade de alunos da turma: ");
    scanf("%d", &alunos);

    printf("Informe a quantidade de alunos de cada grupo: ");
    scanf("%d", &elementos);

    // SEGUINDO A FORMULA n!/p!(n-p)!


    divisor = fatorial(alunos);
    alunos = alunos-elementos;
    aux = fatorial(alunos);
    dividendo1 = fatorial(elementos);
    dividendo = aux*dividendo1;
    maneiras = divisor/dividendo;

    printf("\n%.0f maneiras difenetes", maneiras);

}
