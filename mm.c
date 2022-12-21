#include<stdio.h>
#include<math.h>

/* Dado uma quantidade de alunos e suas notas. As notas são armazenadas em um vetor e é retornado a menor nota do
conjunto*/

int main () {

	int n, i = 0 ,m = 10;

	printf("Quantos alunos existem na turma?\n");
	scanf("%d", &n);
	int a[n];

	while (i < n)
	{
		printf("aluno %d: ", i + 1);
		scanf("%d", &a[i]);

      if (a[i] < m)
      {
        m = a[i];
      }

		i++;
	}
  printf("menor nota: %d\n", m);

  return 0; 
}