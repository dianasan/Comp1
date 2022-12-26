#include<stdio.h>

// Dado um vetor retorna o menor valor do vetor e sua posição

int main () {

	int n = 0, l,  x[n], i, mnr = 10, p;

	printf("Digite o tamanho do vetor:");
	scanf("%d", &l);
	
	if ((l > 1) && (l < 1000)) 
	{
		n = l;
	
	for (i = 0; i < l; i++)
	{
		scanf("%d", &x[i]);

			if (x[i] < mnr)
			{
				mnr = x[i];
				p = i;
			}
	}
	
	}
	printf("Menor valor:%d\n", mnr);
	printf("Posicao: %d\n", p);

return 0;

}