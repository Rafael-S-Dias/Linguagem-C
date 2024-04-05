# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int menu, totalFamilias = 0, numeroFilhos, somaFilhos, mediaFilhos;
	float salario, soma, mediaSalarial, maiorSalario = INT_MIN, menorSalario = INT_MAX;
	char reiniciar;
	
	do {
		do {
		
			printf("========== MENU =========== \n");
			printf("Como deseja prosseguir? \n");
			printf("Digite [1] para adicionar uma nova fam�lia \n");
			printf("Digite [2] para exibir resultados e sair\n");
			scanf("%i", &menu);
			system("cls || clear");
	
	
				switch (menu) {
				case 1:
					totalFamilias++;
					printf("Quanto � a renda familiar em reais da sua fam�lia: ");
					scanf("%f", &salario);			
					soma += salario;
					
					printf("Quantos filhos sua fam�lia possue: ");
					scanf("%i", &numeroFilhos);
					somaFilhos += numeroFilhos;
					system("cls || clear");
					
					if   (salario > maiorSalario) {
						maiorSalario = salario;
					} 
					if (salario < menorSalario && salario > 0) {
						menorSalario = salario;
					}
					break;
					
				case 2:
					break;
					
				default :
					printf("ERRO! COMANDO INVALIDO!");
					sleep(2);
					system("cls || clear");
			} 	
			
			} while (menu != 2);
			
			// Calculos
			mediaSalarial = salario / totalFamilias;
			mediaFilhos = numeroFilhos / totalFamilias;
			
			// Exibindo Resultados
			printf("%f", salario);
			printf("Total de fam�lias registradas: %i \n", totalFamilias);
			printf("Media salarial familiar: R$%.2f \n", mediaSalarial);
			printf("Media de filhos por fam�lia: %i \n", mediaFilhos);
			if (maiorSalario == menorSalario) {
				printf("Ambos os valores de maior e menor salario s�o iguais �: R$%.2f \n", maiorSalario);
			} else {
				printf("O maior renda fam�liar registrada foi: R$%.2f \n", maiorSalario);
				printf("O menor renda fam�liar registrada foi: R$%.2f \n", menorSalario);
			}
	
	
		// Reiniciar ou Fechar c�digo
		printf("\n\nDeseja continuar com esse c�digo? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		
		system("cls || clear");
	
	} while (reiniciar == 'S');	
	
	
	return 0;
}
