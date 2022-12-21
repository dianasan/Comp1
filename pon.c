#include<stdio.h>

// Recebe como entrada a quantidade de alunos e a 3 notas de cada aluno e retorna a média ponderada de cada aluno

int main() {

	float a, b, d, mp;
	int n, c = 0; 
		

	printf("Digite quantas médias deseja calcular.\n");	
	scanf("%d", &n);


	 while (c < n)
	 {
	 	printf("Digite as três notas.\n");
		scanf("%f %f %f", &a, &b, &d);

	    mp = ((a*2) + (b*3) + (d*5))/10;

	    printf("Média: %.1f\n", mp);

	    c++;
	  }  

return 0;
}