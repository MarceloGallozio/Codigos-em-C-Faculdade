#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int alunos, notab, notar, soma;
	notab = 0;
	notar = 0;
	printf("Digite quantos alunos tem na turma\n");
	scanf("%d", &alunos);
	float notas[alunos];
	float med;
	for (int i = 0; i < alunos; i++) {
		printf("Digite a nota do %d aluno\n", i+1);
		scanf("%f", &notas[i]);
		if (notas[i] > 6)
			notab++;
		if (notas[i] <= 6)
			notar++;
	soma += notas[i];
	}
	printf("As notas dos alunos foram %.2f\t", notas[alunos]);
	med = soma / alunos;
	printf("A media dos alunos foram %.2f\n", med);
	printf("%d alunos ficaram acima da media 6 e %d alunos ficaram abaixo\n", notab, notar);
}