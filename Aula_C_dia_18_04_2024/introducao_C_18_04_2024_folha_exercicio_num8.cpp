#include<stdio.h>
#include<stdlib.h>


int main (void) {
	float peso, altura, imc;
	int n;
	int ob, acp, pn, abx;
	ob = acp = pn = abx = imc = 0;
	
	printf("Digite o numero de pessoas que serao lancadas no sistema\n");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		printf("Digite o peso da %d pessoa\n", i);
		scanf("%f", &peso);
		printf("Digite a altura da %d pessoa\n", i);
		scanf("%f", &altura);
		imc = peso / (altura * altura);
		if (imc >= 30) {
			ob++;
		}
		else if (imc >= 25) {
			acp++;
		}
		else if (imc >= 18.5) {
			pn++;
		}
		else {
			abx++;
		}
	}
	printf("A quantidade de pessoas obesas e %d\n", ob);
	printf("A quantidade de pessoas acima do peso e %d\n", acp);
	printf("A quantidade de pessoas com peso normal e %d\n", pn);
	printf("A quantidade de pessoas do peso %d\n", abx);
	
	system("PAUSE");
}