#include<stdio.h>
#include<stdlib.h>

int main(void){
	float peso_ideal, h;
	printf("\nInforme sua altura em metros: ");
	scanf("%f", &h);
	peso_ideal = (72.7 * h) - 58;
	printf("\nOla seu peso ideal e %.1f kg", peso_ideal);
}

//int main(void){
//	int larg, comp, a;
//	printf("\nDigite a largura do terreno: ");
//	scanf("%i", &larg);
//	printf("\nAgora digite o comprimento do terreno: ");
//	scanf("%i", &comp);
//	a = larg * comp;
//	printf("\nA area do terreno e %im", a);
//}