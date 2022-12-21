#include<stdio.h>

//Recebe como entrada 5 valores e os armazena em um vetor. Retorna o maior valor e a posição dele no vetor

int main () {

	int e = 6, i, v[e], m = 0, p; 

	for (i = 1; i < e; i++)
	{
		printf("Digite o valor: ");
		scanf("%d", &v[i]);
		
		if (v[i] > m)
		{
			m = v[i];
			p = i;
		}
		
	}
	
	printf(" O maior valor é %d e está na posição %d do vetor\n", m, p);


return 0;
}