#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef struct {
//char nome[50];
//int idade;
//float nota;
//} Aluno;

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main()
{
    int n;
    printf("Quantos alunos tem na turma?\n");
    scanf("%d", &n);
    struct Aluno aluno1[n];
    
    for (int i = 1; i <= n; i++) {
        printf("Digite o nome do %d aluno:\n", i);
        scanf("%s", aluno1[i].nome);
        
        printf("Digite a idade do %d aluno:\n", i);
        scanf("%d", &aluno1[i].idade);
        
        printf("Digite a nota do %d aluno:\n", i);
        scanf("%f", &aluno1[i].nota);
    }
    
    for (int i = 1; i <= n; i++) {
        printf("Dados do aluno:\n");
        printf("Nome: %s\n", aluno1[i].nome);
        printf("Idade: %d\n", aluno1[i].idade);
        printf("Nota: %.2f\n", aluno1[i].nota);
    }
    return 0;
}