#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NOTA 2
#define TEMA 3
#define APROV 7
#define REC 5

int main() {
	setlocale(LC_ALL, "portuguese");
	
// Variaveis
float notas[TEMA][NOTA], soma[NOTA], media[NOTA];
int contador, contador2;
char disciplinas[TEMA][200];


for (contador = 0; contador < TEMA; contador++) {
	printf("Digite o nome da %i� disciplina: ", contador+1);
	scanf("%s", &disciplinas[contador]);
	
	for (contador2 = 0; contador2 < NOTA; contador2++){
		printf("Digite a %d� nota de %s: ", contador2+1, disciplinas[contador]);
		scanf("%f", &notas[contador][contador2]);
		
		soma[contador] += notas[contador][contador2];
		media[contador] = soma[contador] / NOTA;
	}
	printf("\n");
}	

system("cls || clear");

// Resultados
for (contador = 0; contador < TEMA; contador++) {
	printf("Notas da disciplina %s: \n", disciplinas[contador]);
	
	for (contador2 = 0; contador2 < NOTA; contador2++){
	printf("%i� nota: %.2f \n", contador2+1, notas[contador][contador2]);
	}
	//printf("Soma das medias: %.2f \n", soma[contador]);
	printf("M�dia: %.2f \n", media[contador]);
		if (media[contador] >= APROV) {
		printf("Parab�ns!! Voc� foi aprovado na disciplina %s!", disciplinas[contador]);
	} else if (media[contador] >= REC && media[contador] < APROV) {
		printf("Voc� ficou de recupera��o na disciplina %s!", disciplinas[contador]);
	} else {
		printf("Infelizmente voc� foi reprovado na disciplina %s!!", disciplinas[contador]);
	}
	printf("\n \n");
}

	return 0;
	
}
