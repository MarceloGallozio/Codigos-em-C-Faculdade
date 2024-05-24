#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
	for (int i = 0; i < 10; i++) {
		printf("Digite o %d valor:\n", i+1);
		scanf("%d", &vet[i]);
	}
	printf("\n\nImprimindo o vetor invertido\n\n");
	for (int i = 0; i < 10; i++){
		printf("%d\t", vet[9-i]);
}
	return 0;
}