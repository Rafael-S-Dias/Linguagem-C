#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define BANDA 2
#define INTEGRA 2

int main () {
	// Variaveis
	char banda[BANDA][200], nomes[BANDA][INTEGRA][200];
	int contador, contador2;
	
	setlocale(LC_ALL, "portuguese");
	
	for (contador = 0; contador < BANDA; contador++) {
		printf("Informe o nome da %i� banda musical: ", contador+1);
		scanf("%s", &banda[contador]);
		
		for (contador2 = 0; contador2 < INTEGRA; contador2++) {
		printf("Informe o nome do %i� integrante da banda: ", contador2+1);
		scanf("%s", &nomes[contador][contador2]); 
	}
	printf("\n");
}
	//system("cls || clear");
	
	// Resultados
	for (contador = 0; contador < BANDA; contador++) {
		printf("%i� Banda: %s\n", contador+1, banda[contador]);
		
		for (contador2 = 0; contador2 < INTEGRA; contador2++) {
			printf("%i� Integrante: %s\n", contador2+1, nomes[contador][contador2]);
		}
		printf("\n");
	}


	return 0;
}
