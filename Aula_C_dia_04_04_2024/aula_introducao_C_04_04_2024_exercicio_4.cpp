#include<stdio.h>
#include<stdlib.h>
 
 int main (void) {
 	float nota, total, med;
 	int qtdalunos;
 	total = 0;
 	printf("Digite a quantidade de alunos da turma\n");
 	scanf("%d", &qtdalunos);
 	for (int i = 1; i <= qtdalunos; i++) {
 		printf("Digite a nota do %d aluno\n", i);
 		scanf("%f", &nota);
 		total = total + nota;
	 }
	med = total / qtdalunos;
	if (med >= 7){
		printf("A turma esta em nivel bom com %.2f de media\n", med);
	}
	else if (med >=5) {
		printf("A turma esta em nivel regular com %.2f de media\n", med);
	}
	else {
		printf("A turma esta em nivel de atencao com %.2f de media\n", med);
	}
	system("PAUSE");
 }