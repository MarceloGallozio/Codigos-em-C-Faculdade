#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int num, tab;
	do {
	printf("Digite um numero de 2 a 9 que irei mostrar sua taboada\n");
	scanf("%d", &num);		
	} while (num <= 1 || num >= 10);

	for (int i = 1; i < 11; i++){
	tab = num * i;
	printf("%d x %d = %d\n", num, i, tab);
	}
}
