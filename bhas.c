#include<stdio.h>
#include<math.h>

// Calcula a fórmula de Bhaskara dado os valores de a, b e c

int main(void){

	double a, b, c, d, r1, r2;

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

  d = ((b*b) - 4 * a * c);

      if (a == 0) {
  	  printf("Impossivel calcular\n");
      }

      else if (d < 0) {
  	  printf("Impossivel calcular\n");
      }

      else {
      r1 = ((- b + sqrt(d)) /(2 * a));
      r2 = ((- b - sqrt(d)) /(2 * a));
     
      printf("R1 = %.5lf\n", r1);
      printf("R2 = %.5lf\n", r2);

      }
return 0;

}
