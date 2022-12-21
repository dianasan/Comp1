#include <stdio.h>
#include <math.h>

// Calcula a área de um círculo a partir de um raio dado pelo usuário

int main (){

double r, A, raio;
double pi = 3.14159;

printf("Digite o valor do raio.\n");
scanf ("%lf", &r);

raio = pow(r,2);
//raio = r * r;
A = pi * raio;

printf("A = %.4lf\n", A);

return 0;
}