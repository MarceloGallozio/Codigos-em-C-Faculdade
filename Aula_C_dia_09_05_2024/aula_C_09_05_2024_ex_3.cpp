#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite a quantidade de elementos:\n");
    scanf("%d", &n);
    int vet[n];
    int soma = 0;
    int numero_maior, numero_menor, numero_media;
    numero_maior = 0;
    numero_menor = 0;
    numero_media = 0;
    float med;
    
    for (int i = 0; i < n; i++) {
    	printf("Digite o %d elemento\n", i+1);
    	scanf("%d", &vet[i]);
    	soma += vet[i];
	}
	med = soma / n;
	for (int i = 0; i < n; i++) {
		if (med < vet[i])
			numero_maior++;
		if (med == vet[i])
			numero_media++;
		if (med > vet[i])
			numero_menor++;
		printf("%d\t", vet[i]);
	}
	printf("\nA media e: %.2f", med);
	printf("\nA quantidade de elementos maiores que a media foi: %d", numero_maior);
	printf("\nA quantidade de elementos na media foi: %d", numero_media);
	printf("\nA quantidade de elementos menores que a media foi: %d\n", numero_menor);
	return 0;
}