#include<stdio.h>
#include<stdlib.h>

int calcularFatorial(int num) {
	int fatorial = 1;
	for (int i = 2; i <= num; i++) {
		fatorial = fatorial * i;
	}
	return fatorial;
}

int main (void) {
	int numero, res;
	printf("Digite um numero inteiro positivo:\n");
	scanf("%d", &numero);
	if (numero < 0) {
		printf("Erro: O numero deve ser positivo.\n");
		return 1;
	}
	res = calcularFatorial(numero);
	printf("O fatorial de %d e: %d\n", numero, res);
	return 0;
}