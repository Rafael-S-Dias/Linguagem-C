#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
   
    int valor, somaGeral = 0, somaPares = 0, contadorGeral = 0;
    int pares = 0, impares = 0;
    // Minhas alterações 
    int maiorValor = 0, menorValor = valor;
    float mediaGeral, mediaPares;
   
    printf("Digite um número: ");
    scanf("%i",&valor);
   
    while (valor != 0) {
        if (valor > 0) {
            contadorGeral++;
            somaGeral += valor;
           
            if (valor % 2 == 0) {
                // pares = pares + 1;
                pares++;
               
                //somaPares = somaPares + valor;
                somaPares += valor;
            } else {
                impares++;
            }
        }    
		// Verificação de Maior e Menor Valor // Minhas alterações 
		    if   (valor > maiorValor) {
		    	maiorValor = valor;
			} else if (valor < menorValor && valor > 0) {
				menorValor = valor;
			}
       
            printf("Digite um número: ");
            scanf("%i",&valor);
    }
   
    if (contadorGeral == 0) {
        printf("Não foi informado um número positivo.");
    } else {
        // cast
        // 2 -> 2.0
        mediaGeral = somaGeral / (float) contadorGeral;
        mediaPares = somaPares / (float) pares;
       
        printf("Quantidade de pares: %i \n", pares);
        printf("Quantidade de ímpares: %i \n", impares);
        printf("Média geral: %.1f \n", mediaGeral);
        printf("Média de números pares: %.1f \n", mediaPares);
        // Minhas alterações 
        if (contadorGeral > 1) {
	        printf("Maior valor: %i \n", maiorValor);
	        printf("Menor valor: %i \n", menorValor);
	    } else {
        	printf("Os valores de maior e menor são iguais, sendo o valor: %i", maiorValor);
		}
    }
   
    return 0;
}
