#include<stdio.h>

// Dado uma quantidade q de alunos e suas notas retorna quantos deles foram aprovados com média maior ou igual a 5

int main (void) {

	int q, n, c, m = 0, ap = 0;

	printf("Quantidade de alunos na turma: ");
	scanf ("%d", &q);

	for (c = 1; c <= q; c++)
	{
		printf("Nota do aluno: ");
		scanf("%d", &n);

		if (n < 0 || n > 10)
		{
		
		}

		else if (n >= 5)
		{
		
			ap = m + 1;
			m = ap;
		}
	}
printf("Foram aprovados %d alunos\n", ap);

return 0;
}