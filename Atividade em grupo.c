#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<limits.h>

# define TAM 5

int main(){
setlocale(LC_ALL,"portuguese");

// Declarando as variáveis.
int contador;
int numero[TAM], pares = 0, impares = 0, positivo = 0, negativo = 0;
int maiorNumero = INT_MIN, menorNumero = INT_MAX;
int somaPares = 0, somaImpares = 0, soma = 0;
float mediaPares, mediaImpares, mediaGeral;

// Solitando dados ao usuário.

for (contador = 0; contador < TAM; contador++ ){
	
	printf("Digite seu %dª número: ", contador + 1);
	scanf("%i",&numero[contador]);
	
	soma += numero[contador]; 
	
	if(numero[contador] %2 == 0){
		pares ++;
		somaPares += numero[contador];
	} else {
		impares ++;
		somaImpares += numero[contador];
	}
	
	
	if(numero[contador] > 0){
		positivo ++;
	} else if (numero[contador] < 0){
		negativo ++;
	}
	
	
	if(numero[contador] > maiorNumero){
		maiorNumero = numero[contador];
	} 
	if(numero[contador] < menorNumero){
		menorNumero = numero[contador];
	}
	

}

system("cls || clear");

// Cálculo.

mediaPares   = somaPares   / pares;
mediaImpares = somaImpares / impares;
mediaGeral   = soma / (float) TAM;



// Resultados

printf("\n=== Exibindo resultado ===\n");
printf("Quantidade de números inseridos: %d\n", contador);
printf("Quantidade de números pares: %d\n", pares);
printf("Quantidade de números ímpares: %d\n", impares);
printf("Quantidade de números positivos: %d\n", positivo);
printf("Quantidade de números negativos: %d\n \n", negativo);
printf("O maior número inserido foi: %d\n", maiorNumero);
printf("O menor número inserido foi: %d\n \n", menorNumero);
printf("A média dos números pares: %.2f\n", mediaPares);
printf("A média dos números ímpares: %.2f\n", mediaImpares);
printf("A média geral: %.2f\n \n", mediaGeral);
for (contador = TAM-1; contador >= 0; contador--) {
	printf("Seu %dª número foi: %d\n", contador+1, numero[contador]);
}

	
return 0;	
}
