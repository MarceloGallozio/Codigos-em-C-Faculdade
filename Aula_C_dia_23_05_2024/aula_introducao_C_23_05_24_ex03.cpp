#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Digite o numero de salarios:\n");
    scanf("%d", &n);
    float salarios[n];
    float impostos[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o salario %d:\n", i+1);
        scanf("%f", &salarios[i]);
    }
    for (int i = 0; i < n; i++) {
        float salario = salarios[i];
        float imposto = 0.0;
        if (salario <= 2112.00) {
            imposto = 0.0;
        }
        else if (salario <= 2826.65) {
            imposto = (salario - 2112.00) * 0.075;
        }
        else if (salario <= 3751.05) {
            imposto = (salario - 2826.65) * 0.15 + (2826.65 - 2112.00) * 0.075;
        }
        else if (salario <= 4664.68) {
            imposto = (salario - 3751.05) * 0.225 + (3751.05 - 2826.65) * 0.15 + (2826.65 - 2112.00) * 0.075;
        }
        else {
            imposto = (salario - 4664.68) * 0.275 + (4664.68 - 3751.05) * 0.225 + (3751.05 - 2826.65) * 0.15 + (2826.65 - 2112.00) * 0.075;
        }
        impostos[i] = imposto;
    }
    for (int i = 0; i < n; i++) {
        printf("Salario: %.2f - Imposto: %.2f\n", salarios[i], impostos[i]);
    }
    return 0;
}