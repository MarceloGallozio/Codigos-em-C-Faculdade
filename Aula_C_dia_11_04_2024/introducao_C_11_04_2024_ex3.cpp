#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (void) {
	char nome[40];
	int tam;
	
	for (int i = 1; i <= 4; i++) {
		printf("Digite o nome da %d da pessoa\n", i);
		gets(nome);
		tam = strlen(nome);
		printf("\nO nome digitado possui %d letras\n", tam);
	}
	printf("\n\n");
	system("PAUSE");
}
