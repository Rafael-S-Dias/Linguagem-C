#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
   
    int valor, somaGeral = 0, somaPares = 0, contadorGeral = 0;
    int pares = 0, impares = 0;
    // Minhas altera��es 
    int maiorValor = 0, menorValor = valor;
    float mediaGeral, mediaPares;
   
    printf("Digite um n�mero: ");
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
		// Verifica��o de Maior e Menor Valor // Minhas altera��es 
		    if   (valor > maiorValor) {
		    	maiorValor = valor;
			} else if (valor < menorValor && valor > 0) {
				menorValor = valor;
			}
       
            printf("Digite um n�mero: ");
            scanf("%i",&valor);
    }
   
    if (contadorGeral == 0) {
        printf("N�o foi informado um n�mero positivo.");
    } else {
        // cast
        // 2 -> 2.0
        mediaGeral = somaGeral / (float) contadorGeral;
        mediaPares = somaPares / (float) pares;
       
        printf("Quantidade de pares: %i \n", pares);
        printf("Quantidade de �mpares: %i \n", impares);
        printf("M�dia geral: %.1f \n", mediaGeral);
        printf("M�dia de n�meros pares: %.1f \n", mediaPares);
        // Minhas altera��es 
        if (contadorGeral > 1) {
	        printf("Maior valor: %i \n", maiorValor);
	        printf("Menor valor: %i \n", menorValor);
	    } else {
        	printf("Os valores de maior e menor s�o iguais, sendo o valor: %i", maiorValor);
		}
    }
   
    return 0;
}
