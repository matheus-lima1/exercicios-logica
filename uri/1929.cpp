#include <stdio.h>
#include <stdlib.h>
/*
Olimpíada Brasileira de Informática - 2014.


PARA UM TRIANGULO EXISTIR:
A MEDIDA DE QUALQUER UM DOS LADOS SEJA MENOR A SOMA DOS OUTROS DOIS
E MAIOR QUE O VALOR ABSOLUTO DA DIFERENÇA ENTRE ESSAS

*/
int main() {
int x, y, z, w;

scanf("%d%d%d%d",&x,&y,&z,&w);

if ((x < (z + w)) && (z < (x + w)) && (w < (x + z))) {
printf("S\n");
}else if ((x < (y + w)) && (y < (x + w)) && (w < (x + y))) {
printf("S\n");
}else if((x < (y + z)) && (y < (x + z)) && (z < (x + y))) {
printf("S\n");
}else if ((y < (w + z)) && (w < (y + z)) && (z < (w + y))) {
printf("S\n");
}else {
printf("N\n");
}
return 0;
}
