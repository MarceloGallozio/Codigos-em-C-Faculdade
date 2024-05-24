#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int valor;
	printf("Digite o valor: \n");
	scanf("%d", &valor);
	if (valor % 2 == 0)
		printf("O valor digitado e par.\n");
	else 
		printf("O valor digitado e impar.\n");
system("PAUSE");
}
