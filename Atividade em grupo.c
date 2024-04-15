#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<limits.h>

# define TAM 5

int main(){
setlocale(LC_ALL,"portuguese");

// Declarando as vari�veis.
int contador;
int numero[TAM], pares = 0, impares = 0, positivo = 0, negativo = 0;
int maiorNumero = INT_MIN, menorNumero = INT_MAX;
int somaPares = 0, somaImpares = 0, soma = 0;
float mediaPares, mediaImpares, mediaGeral;

// Solitando dados ao usu�rio.

for (contador = 0; contador < TAM; contador++ ){
	
	printf("Digite seu %d� n�mero: ", contador + 1);
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

// C�lculo.

mediaPares   = somaPares   / pares;
mediaImpares = somaImpares / impares;
mediaGeral   = soma / (float) TAM;



// Resultados

printf("\n=== Exibindo resultado ===\n");
printf("Quantidade de n�meros inseridos: %d\n", contador);
printf("Quantidade de n�meros pares: %d\n", pares);
printf("Quantidade de n�meros �mpares: %d\n", impares);
printf("Quantidade de n�meros positivos: %d\n", positivo);
printf("Quantidade de n�meros negativos: %d\n \n", negativo);
printf("O maior n�mero inserido foi: %d\n", maiorNumero);
printf("O menor n�mero inserido foi: %d\n \n", menorNumero);
printf("A m�dia dos n�meros pares: %.2f\n", mediaPares);
printf("A m�dia dos n�meros �mpares: %.2f\n", mediaImpares);
printf("A m�dia geral: %.2f\n \n", mediaGeral);
for (contador = TAM-1; contador >= 0; contador--) {
	printf("Seu %d� n�mero foi: %d\n", contador+1, numero[contador]);
}

	
return 0;	
}
