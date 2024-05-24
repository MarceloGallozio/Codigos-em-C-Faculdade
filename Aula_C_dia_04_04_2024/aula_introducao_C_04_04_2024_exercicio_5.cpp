#include<stdio.h>
#include<stdlib.h>
 
 int main (void) {
 	float av1, av2, soma, med;
 	int qtdalunos, qtdaprovados, qtdreprovados, qtdfinal;
 	qtdaprovados = qtdreprovados = qtdfinal = soma = 0;
 	printf("Digite a quantidade de alunos\n");
 	scanf("%d", &qtdalunos);
 	for (int i = 1; i <= qtdalunos; i++){
 		printf("Digite a av1 do %d aluno\n", i);
 		scanf("%f", &av1);
 		printf("Digite a av2 do %d aluno\n", i);
 		scanf("%f", &av2);
 		soma = av1 + av2;
	 }
	 med = soma / 2;
	 if (med >= 6) {
	 	qtdaprovados++;
	 }
	 else if (med >= 4) {
	 	qtdfinal++;
	 }
	 else {
	 	qtdreprovados++;
	 }
	printf ("%.2f", med);
	printf("A quantidade de alunos aprovados e %d\n", qtdaprovados);
	printf("A quantidade de alunos em exame final e %d\n", qtdfinal);
	printf("A quantidade de alunos reprovados e %d\n", qtdreprovados);
	system("PAUSE");
 }