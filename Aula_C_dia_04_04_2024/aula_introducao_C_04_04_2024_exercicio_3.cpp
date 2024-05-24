#include<stdio.h>
#include<stdlib.h>
 
 int main (void) {
 	int num, qtdpar, qtdimpar;
 	qtdpar = qtdimpar = 0;
 	for (int i = 1; i < 11; i++) {
	 
 		printf("Digite o %d numero\n", i);
 		scanf("%d", &num);
 		if (num % 2 == 0) {
 			qtdpar++;
	    }
	    else {
	    	qtdimpar++;
		}
	}
printf("\n A quantidade de numeros pares digitados e: %d\n", qtdpar);	
printf("\n A quantidade de numeros impares digitados e: %d\n", qtdimpar);	
system("PAUSE");
 }