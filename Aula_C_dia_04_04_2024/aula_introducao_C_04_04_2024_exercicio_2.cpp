#include<stdio.h>
#include<stdlib.h>
 
 int main (void) {
 	int idade, qtdmaior, qtdmenor;
 	qtdmaior = 0;
 	qtdmenor = 0;
 	for (int i = 1; i < 11; i++) {
 		printf("Digite a idade do %d aluno\n",i);
 		scanf("%d", &idade);
 		if (idade >= 18) {
 			qtdmaior++;
		 }
		else {
			qtdmenor++;
		}
	 }
printf("\n A quantidade de alunos maiores de idade e: %d", qtdmaior);
printf("\n A quantidade de alunos menores de idade e: %d", qtdmenor);
 }