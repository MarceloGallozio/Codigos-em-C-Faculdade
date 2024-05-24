#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite a quantidade de elementos:\n");
    scanf("%d", &n);
    int vet[n];
	int par, impar;
	for (int i = 0; i < n; i++) {
		printf("Digite o %d elemento:\n", i+1);
		scanf("%d", &vet[i]);
		if (vet[i] % 2 == 0) 
			par++;
		else
			impar++;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\t", vet[i]);
	}
	printf("\nA quantidade de pares foi: %d\n", par);
	printf("A quantidade de impares foi: %d\n", impar);
	return 0;
}