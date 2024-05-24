#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int num1, num2, op;
	float res;
	
	printf("Digite o primeiro numero\n");
	scanf("%d", &num1);
	printf("Digite o segundo numero\n");
	scanf("%d", &num2);
	
	do {
		printf("Digite o operador \n 1 - somar \n 2 - subtrair \n 3 - multiplicar \n 4 - dividir \n");
		scanf("%d", &op);
	} while (op < 1 || op > 4);
	
	switch(op) {
		case 1: 
			res = num1 + num2;			 
			break;
		
		case 2: 
			res = num1 - num2;			
			break;
		
		case 3: 
			res = num1 * num2;
			break;
		
		case 4: 
			res = num1 / num2;
			break;
		
	}
	printf("O resuldado da operacao e %.2f\n", res);
	system("PAUSE");
}