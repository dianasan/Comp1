#include <stdio.h>

// A entrada é um valor inteiro em segundos e retorna a conversão em horas, minutos e segundos.

int main () {

	int n, h, m, s;
	printf("Digite o valor: ");
	scanf("%d", &n);

	printf("Formato: horas:minutos:segundos\n");
	h = n/3600;
	m = n%3600 / 60;
	s = n%3600%60;

	printf("%d:%d:%d", h, m, s);
	

	return 0;
}