#include <stdio.h>
#include <math.h>

// Recebe dois vetores de entrada e retorna a distância entre eles com precisão de 4 casas decimais 

int main (void) {

	float x1, x2, y1, y2, p, d;

	printf("Digite o ponto x do primeiro vetor: ");
	scanf("%f", &x1);
	printf("Digite o ponto y do primeiro vetor: ");
	scanf("%f", &y1);
	printf("Digite o ponto x do segundo vetor: ");
	scanf("%f", &x2);
	printf("Digite o ponto y do segundo vetor: ");
	scanf("%f", &y2);

    p = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
	d = sqrt (p);
	printf(" A distância entre os vetores (%.1f,%.1f) e (%.1f,%.1f) é %.4f\n",x1,y1,x2,y2,d);

	return 0;
}