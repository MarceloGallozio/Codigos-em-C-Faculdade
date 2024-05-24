#include<stdio.h>
#include<stdlib.h>

int main(void){
	int l1, l2, l3;
	printf("Digite o primeiro lado: \n");
	scanf("%d", &l1);
	printf("Digite o segundo lado: \n");
	scanf("%d", &l2);
	printf("Digite o terceiro lado: \n");
	scanf("%d", &l3);
	if (l1 == l2 && l2 == l3)
		printf("Equilatero\n\n");
	else if (l1 != l2 && l2 != l3 && l1 != l3)
		printf("Escaleno\n\n");
	else
		printf("Isosceles\n\n");
system("PAUSE");
}

