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
	printf("Digite o nome da %iº disciplina: ", contador+1);
	scanf("%s", &disciplinas[contador]);
	
	for (contador2 = 0; contador2 < NOTA; contador2++){
		printf("Digite a %dº nota de %s: ", contador2+1, disciplinas[contador]);
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
	printf("%iº nota: %.2f \n", contador2+1, notas[contador][contador2]);
	}
	//printf("Soma das medias: %.2f \n", soma[contador]);
	printf("Média: %.2f \n", media[contador]);
		if (media[contador] >= APROV) {
		printf("Parabéns!! Você foi aprovado na disciplina %s!", disciplinas[contador]);
	} else if (media[contador] >= REC && media[contador] < APROV) {
		printf("Você ficou de recuperação na disciplina %s!", disciplinas[contador]);
	} else {
		printf("Infelizmente você foi reprovado na disciplina %s!!", disciplinas[contador]);
	}
	printf("\n \n");
}

	return 0;
	
}
