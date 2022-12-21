#include <stdio.h>

// Dado um inteiro de entrada retorna quantos anos, meses e dias esse valor corresponde

int main (void) {

	int di, a, m, dd;
	printf("");
	scanf("%d", &di);

	a = di/365;
	m = di%365 / 30;
	dd = di%365%30;

	printf("%d ano(s)\n", a); 
	printf("%d mes(es)\n", m);
	printf("%d dia(s)\n", dd);

	return 0;
}