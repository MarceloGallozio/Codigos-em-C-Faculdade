#include<stdio.h>
#include<stdlib.h>

float calcularAreaRetangulo(float base, float altura) {
	return base * altura;
}

float calcularAreaCirculo(float raio) {
	return 3.14159 * raio * raio;
}

float calcularAreaTriangulo(float base, float altura) {
	return (base * altura) /2.0;
}

int main (void) {
	float base, altura, raio;
	
	printf("Digite a base do retangulo:\n");
	scanf("%f", &base);
	printf("Digite a altura do retangulo:\n");
	scanf("%f", &altura);
	printf("Area do retangulo: %.2f\n", calcularAreaRetangulo(base, altura));
	
	printf("Digite o raio do circulo:\n");
	scanf("%f", &raio);
	printf("Area do circulo: %.2f\n", calcularAreaCirculo(raio));
	
	printf("Digite a base do triangulo:\n");
	scanf("%f", &base);
	printf("Digite a altura do triangulo:\n");
	scanf("%f", &altura);
	printf("Area do triangulo: %.2f\n", calcularAreaTriangulo(base, altura));
	return 0;
}