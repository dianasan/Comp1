#include <stdio.h>
#include <stdlib.h>

/*Recebe como entrada o nome de um funcionário, seu salário base e o valor total das vendas realizadas no mês.
  Retorna o salário total do funcionário, somando o salário base e a porcentagem da comissão. */
  
int main () {

	char nome[30];
	double sf, vd,sa;

    printf("Digite o nome do funcionário: ");
	scanf("%s", nome);
    printf("Digite o salário base do funcionário: ");
	scanf("%lf", &sf);
    printf("Digite o valor das vendas realizadas pelo funcionário: ");
	scanf("%lf", &vd);

    sa = sf + (vd * 0.15);

    printf(" Dados de salário do funcionário %s\n", nome);
    printf("O salário base é %.2lf\n", sf);
    printf("Total das vendas realizadas %.2lf\n", vd);
    printf(" Salário total = R$%.2lf\n", sa);

    return 0;
}