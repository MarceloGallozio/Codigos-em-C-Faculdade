#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o numero de elementos no vetor:\n");
    scanf("%d", &n);
    int vet[n];
    int ref, ref_menor, ref_apareceu;
    ref_menor = 0,
    ref_apareceu = 0;
    printf("Digite um numero de referencia:\n");
    scanf("%d", &ref);
    for (int i = 0; i < n; i++) {
    	printf("Digite o %d numero:\n", i+1);
    	scanf("%d", &vet[i]);
    	if (vet[i] < ref)
    		ref_menor++;
    	if (vet[i] == ref)
    		ref_apareceu++;
	}
	for (int i = 0; i < n; i++) {
		if (vet[i] > ref)
    		printf("%d\t", vet[i]);
	}
	printf("\nA quantidade de numeros menores que a referencia e: %d\n", ref_menor);
	printf("\nA quantidade de vezes que a referencia apareceu foi: %d\n", ref_apareceu);
	return 0;
}