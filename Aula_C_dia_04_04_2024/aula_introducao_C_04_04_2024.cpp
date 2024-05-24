#include<stdio.h>
#include<stdlib.h>
 
 int main (void) {
 	int num, soma;
 	soma = 0;
 	for (int i = 1; i < 11; i++) {
 		printf("Digite o %d numero\n", i);
 		scanf("%d", &num);
 		soma = soma + num;
	 }
	printf("\nO resultado do somatorio e %d\n",soma);
	system("PAUSE");
 }