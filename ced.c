#include<stdio.h>

// Dado um valor de entrada retorna o mínimo possível de cédulas que representa este valor

int main(){

	int v, cc, ci, cv, cd, cn, co, cm;

	printf("Digite o valor: ");
	scanf("%d", &v);

	if (0 < v && v < 1000000){

		cc = v/100;
		ci = v%100 /50;
		cv = v%100%50 / 20;
		cd = v%100%50%20 / 10;
		cn = v%100%50%20%10 / 5;
		co = v%100%50%20%10%5 / 2;
		cm = v%100%50%20%10%5%2 /1;
	}
printf("%d\n", v);
printf("%d nota(s) de R$ 100,00\n", cc);
printf("%d nota(s) de R$ 50,00\n", ci);
printf("%d nota(s) de R$ 20,00\n", cv);
printf("%d nota(s) de R$ 10,00\n", cd);
printf("%d nota(s) de R$ 5,00\n", cn);
printf("%d nota(s) de R$ 2,00\n", co);
printf("%d nota(s) de R$ 1,00\n", cm);

return 0;
}

