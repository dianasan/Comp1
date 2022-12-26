#include<stdio.h>

/*Seleciona a quantidade de vezes que o programa vai rodar e, dado um número, retorna uma sequência indo de 0 
até o número selecionado com cada número aparecendo o número de vezes que ele representa. */

int main ()

{
	int i, j, k, res, n, x;
	int sequencia(int t);

	printf("Digite quantas sequências serão apresentadas: ");
	scanf("%d", &n);
	int casos[n], num[n];

	for(int i = 0; i < n; i++)
	{
		printf("Digite o número: ");
		scanf("%d", &x);
		res = sequencia(x);
		casos[i] = res;
		num[i] = x;
	}

	for(int i = 0; i < n; i++)
	{
		if(num[i] == 0)
		{
			printf("Caso %d: %d numero\n", i+1, casos[i]);
			printf("0\n");
		}
		
		else
		{
			printf("Caso %d: %d numeros\n", i+1, casos[i]);

			for(j = 0; j <= num[i]; j++)
			{
				if(j == 0)
					{
						printf("%d ", j);
					}
				
				else
				{
					for(k = j; k > 0; k--)
					{
						printf("%d ", j);
					}
				}
			}
		  printf("\n");
		}
	}
   
   return 0;	
}

int sequencia(int t)
{
	int v; 

	if (t == 0)
	{
		return (1);
	}
	
	else
	{
		v = sequencia(t-1) + t;
		return(v);
	}
}