#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int qnum, num, prod;
	int cont = 1;
	prod = 1;
	printf("Digite a quantidade de numeros da sequencia\n");
	scanf("%d", &qnum);
	while (cont<=qnum){
		printf("Digite o %d numero\n", cont);
		scanf("%d", &num);
		prod = prod * num;
		cont++;
	}
	printf("\nO produtorio da sequencia de numeros e %d\n", prod);
	system("PAUSE");
}