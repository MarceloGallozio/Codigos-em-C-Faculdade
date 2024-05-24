#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void) {
	int x1, x2, y1, y2, res;
	
	printf("Digite as cordenadas x do ponto 1\n");
	scanf("%d", &x1);
	printf("Digite as cordenadas x do ponto 2\n");
	scanf("%d", &x2);
	printf("Digite as cordenadas y do ponto 1\n");
	scanf("%d", &y1);
	printf("Digite as cordenadas y do ponto 2\n");
	scanf("%d", &y2);
	
	res = sqrt(((x1 - x2)*(x1 - x2))+((y1 - y2)*(y1 - y2)));
	printf("A distancia dos pontos e %d\n", res);
	system("PAUSE");
}