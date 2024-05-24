#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(void){
	char nome[30], sexo;
	int idade;
	printf("Informe seu nome: \n");
	gets(nome);
	printf("Informe seu sexo: \n");
	scanf("%c", &sexo);
	printf("Informe sua idade: \n");
	scanf("%d", &idade);
	if ((sexo == 'f'|| sexo == 'F') && idade < 25)
		printf("\n%s. ACEITA.\n\n", nome);
	else 
		printf("\nNAO ACEITA.\n\n");
return 0;
}