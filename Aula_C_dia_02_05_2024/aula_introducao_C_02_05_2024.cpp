#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int vet[10];
	int soma = 0;
	
	for (int i = 0; i < 10; i++) {
		printf("Digite o %d elemento \n", i+1);
		scanf("%d", &vet[i]);
		soma += vet[i];
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\t", vet[i]);
	}
	printf("\nO somatorio dos elementos do vetor e %d\n", soma);
	
	int cont = 0;
	int elem;
	printf("Digite o numero que deseja procurar no vetor:\n");
	scanf("%d", &elem);
	
	for (int i = 0; i < 10; i++) {
		if (vet[i] == elem)
			cont++;
	}
	if (cont > 1)
		printf("O elemento %d apareceu %d vezes", elem, cont);
			if (cont == 1)
				printf("O elemento %d apareceu %d vez", elem, cont);
	else 
		printf("O elemento nao apareceu nenhuma vez");
	return(0);	
}