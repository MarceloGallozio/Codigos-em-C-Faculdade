#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite a quantidade de elementos:\n");
    scanf("%d", &n);
    int numeros[n];
    int prod = 1;
    
    for (int i = 0; i < n; i++) {
        printf("Digite o %d elemento:\n", i+1);
        scanf("%d", &numeros[i]);
        prod *= numeros[i];
        
    }
    for (int i = 0; i < n; i++) {
        printf("%d\t", numeros[i]);
    }
    printf("\nO produtorio dos elementos do vetor e %d", prod);
    return 0;
}