#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	int i, a, b, l1, l2, num,lado, tam, espaco, asterisco, x, y, metade, number,j;
	float area, perimetro;
	asterisco=1;
	espaco=tam=10;
	metade=tam/2;
	do{
		for(i=0;i<36;i++){
			printf("#");
		}printf("\n");
		printf("######### SEJA BEM VINDO ########### \n");
		for(i=0;i<36;i++){
			printf("#");
		}printf("\n##");
		for(i=0;i<32;i++){
			printf(" ");
		}printf("## \n");
		printf("## Escolha uma forma geometrica:  ##\n");
		printf("##                                ##\n");
		printf("## 1. Quadrado                    ##\n");
		printf("## 2. Retangulo                   ##\n");
		printf("## 3. Triangulo equilatero        ##\n");
		printf("## 4. Triangulo retangulo         ##\n");
		printf("## 5. Outra                       ##\n");
		printf("## 6. Sair                        ##\n");
		printf("##                                ##\n");
		for(i=0;i<36;i++){
			printf("#");
		};
		printf("\nOpcao: ");
		scanf("%d", &num);

		switch(num){
			//Start CASE 1
			case 1:{
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");
				printf("             Quadrado              \n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");

				printf("Digite o lado do quadrado: ");
				scanf("%d", &a);

				area = a*a;
				perimetro = a+a+a+a;

				printf("\n");
				printf("Area: %.2f \n", area);
				printf("Perimetro: %.2f \n\n", perimetro);

        for (i = 0; i < 2 * a + 3; i++){
			    	printf ("-");
			   	}
      printf("\n");
				for(i=0;i<a;i++){
          printf("|");
				  printf("  ");
					for(b=0;b<a;b++){
						printf("@ ");
					}printf("| \n");
				}
        for (i = 0; i < 2 * a + 3; i++){
			    	printf ("-");
			   	}

				printf("\n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n\n");
				break;
			}
			//Final CASE 1


			//Start CASE 2
			case 2:{
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");
				printf("             Retangulo              \n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");

				printf("Digite a altura do retangulo: ");
				scanf("%d", &l1);
				printf("Digite a base do retangulo: ");
				scanf("%d", &l2);

				area = l1*l2;
				perimetro = (l1+l2)*2;

				printf("\n");
				printf("Area: %.2f \n", area);
				printf("Perimetro: %.2f \n\n", perimetro);

        for (i = 0; i < 2 * l2 + 3; i++){
			    	printf ("-");
			  }printf("\n");
				for(i=0;i<l1;i++){
          printf("|");
				  printf("  ");
					for(b=0;b<l2;b++){
						printf("@ ");
					}printf("|\n");
				}
        for (i = 0; i < 2 * l2 + 3; i++){
			    	printf ("-");
			   }

				printf("\n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n\n");

				break;
			}
			//Final CASE 2


			//Start CASE 3
			case 3:{
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");
				printf("       Triangulo equilatero        \n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");

				printf ("Digite o lado do triângulo equilátero: ");
				scanf ("%d", &lado);

				printf ("\nArea: %.2f", lado * lado * pow (3, 0.5) / 4.0);
				printf ("\nPerimetro: %.2f\n\n", 3.0 * lado);

				printf("\n");

				for (i = 0; i < lado + 1; i++){
			    	printf (" ");
			   	}
			 	printf (" .\n");
			 	for (i = 0; i < lado + 1; i++){
			    	printf (" ");
			   }
			 	printf ("/ \\ \n");
			 	for (i = 0; i < lado; i++){
			    	for (j = 0; j < lado - i; j++){
			 			printf (" ");
					}
				    printf ("/");
				    for (j = 0; j < i; j++){
				 		 printf (" @");
					}
					printf (" @ \\");
				    printf ("\n");
				}
				printf ("/");
			 	for (i = 0; i < 2 * lado + 3; i++){
			    	printf ("_");
			   	}

				printf("\\ \n\n\n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n\n");

				break;
			}
			//Final CASE 3


			//Start CASE 4
			case 4:{
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");
				printf("      Triangulo Retangulo        \n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");

				printf("Digite o lado(catetos iguais): ");
				scanf("%d", &l1);

				area = (l1*l1)/2;
				perimetro = l1*3;

				printf("\n");
				printf("Area: %.2f \n", area);
				printf("Perimetro: %.2f \n\n", perimetro);
        printf ("  .\n");
				printf("  |\\ \n");
				for(a=1;a<=l1;a++){
					printf("  ");
					printf("|");
					for(b=a;b>0 && b<=a;b--){
						printf("@");
					}printf("\\");
					printf("\n");
				}
        printf("  ");
        printf("|");
        for (i = 0; i < 2 * l1 - l1 +1; i++){
			    	printf ("_");
			   	}
      printf("\\");

				printf("\n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n\n");

				break;
			}
			//Final CASE 4

			//Start CASE 5
			case 5:{
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n");
				printf("             Losango              \n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n\n\n");



        for (x=0; x<metade; x++){
            for (i=1; i<=espaco; i++)
                printf(" ");
              espaco--;
              printf("/");
            for (y=0;y<asterisco;y++)
                printf("@");
                printf("\\\n");
                asterisco+=2;
				}
        asterisco-=2;
        espaco++;
        for (x=0; x<metade; x++){


            asterisco-=2;
            espaco++;

            for (i=0; i<espaco;i++)
                printf(" ");
                printf("\\");
            for (y=0; y<asterisco;y++)
                printf("@");
            printf("/\n");
			    }

			    printf("\n");
				for(i=0;i<36;i++){
					printf("=");
				}printf("\n\n");
				break;
			}
			//Final CASE 5

		}
	}while(num!=6);
	return 0;
}
