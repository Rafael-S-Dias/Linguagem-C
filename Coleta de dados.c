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
	int menu, idade, maiorIdade = INT_MIN, menorIdade = INT_MAX, mulheres5k, contador;
	float salario, soma, mediaSalario;
	char reiniciar, sexo;
	
	do {	
		printf("========== MENU =========== \n");
		printf("Como deseja prosseguir? \n");
		printf("Digite [1] para inserir uma nova pessoa \n");
		printf("Digite [2] para exibir resultados \n");
		scanf("%i", &menu);
		system("cls || clear");

		if (menu != 1 || menu != 2) {
			while (menu != 1 ) {
				printf("Opção Invalida!! \n");
				sleep(2);
				system("cls || clear");
				
				printf("========== MENU =========== \n");
				printf("Como deseja prosseguir? \n");
				printf("Digite [1] para inserir uma nova pessoa \n");
				printf("Digite [2] para exibir resultados \n");
				scanf("%i", &menu);
				system("cls || clear");
			}
		}
		
		while (menu == 1) {
			
			printf("Informe sua idade: ");
			scanf("%i", &idade);
			
			// Verificação de Maior e Menor Valor
		    if   (idade > maiorIdade) {
		    	maiorIdade = idade;
			} 
			if (idade < menorIdade && idade > 0) {
				menorIdade = idade;
			}
			
			printf("Informe seu sexo [M/F]: ");
			scanf("%s", &sexo);
			sexo = toupper(sexo);
			
			printf("Informe seu salario: ");
			scanf("%f", &salario);
			
			// Calculos
			contador++;
			soma += salario;
			mediaSalario = soma / contador;
			if(sexo == 'F' && salario >= 5000) {
				mulheres5k++;
			}
			
			printf("\n========== MENU =========== \n");
			printf("Como deseja prosseguir? \n");
			printf("Digite [1] para inserir uma nova pessoa \n");
			printf("Digite [2] para exibir resultados \n");
			scanf("%i", &menu);
			system("cls || clear");
		}
		
		// Exibindo Resultados
		printf("A média salárial do grupo: %.2f \n", mediaSalario);
		if (maiorIdade == menorIdade) {
			printf("Ambos os valores de maior e menor idade são iguais à: %i anos\n", maiorIdade);
		} else {
			printf("A menor idade registrada no grupo foi de %i anos \n", menorIdade);
			printf("A maior idade registrada no grupo foi de %i anos \n", maiorIdade);
		}
		printf("A quantidade de mulheres com salário superior à 5.000,00 foi de: %i mulheres", mulheres5k);
		
		
		
		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		mulheres5k = 0, contador = 0, salario = 0, soma = 0, mediaSalario = 0, maiorIdade = 0, menorIdade = 0;
		system("cls || clear");
	
	} while (reiniciar == 'S');	
	
	return 0;
	
}
