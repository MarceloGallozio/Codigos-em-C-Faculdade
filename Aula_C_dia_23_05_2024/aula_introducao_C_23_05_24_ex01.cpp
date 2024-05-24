#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int l, c;
	printf("Digite o numero de linhas:\n");
	scanf("%d", &l);
	printf("Digite o numero de colunas:\n");
	scanf("%d", &c);
	
	int matrix[l][c];
	
	printf("Digite os elementos da matriz:\n");
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			printf("Elemento [%d][%d]: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("Matriz:\n");
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}