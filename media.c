#include <stdio.h>

// Calcula e retorna a média ponderada de duas notas

int main () {

double p1 = 3.5, p2 = 7.5, a, b, media;

printf("Digite a primeira nota.\n");
scanf("%lf", &a);

printf("Digite a segunda nota.\n");
scanf("%lf", &b);

media = (a * p1 + b * p2)/ 11;

printf("MEDIA = %.5lf\n", media); 

return 0;
}