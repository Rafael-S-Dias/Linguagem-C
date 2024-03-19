# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	char login[50];
	char senha[50];
	char loginCorreto[50] = "Rafael";
	char senhaCorreta[50] = "123456";
	
	// Solicitação
	printf("Digite seu login: ");
	scanf("%s", &login);
	
	printf("Digite sua senha: ");
	scanf("%i", &senha);
	
	
	
	// Resultados
	if (strcmp(login, loginCorreto) == 0 && strcmp(senha, senhaCorreta) == 0) {
		printf("Bem vindo!");
		
	} else {
		printf("Acesso Negado!");
	}
	
	return 0;
}
