#include <stdio.h>

int main() {
   double nota;
   double soma = 0.0;
   int notas_validas = 0;

   while(notas_validas < 2) {
    scanf("%lf", &nota);

    if(nota < 0.0 || nota > 10.0) {
        printf("nota invalida\n");
    } else {
        soma += nota;
        notas_validas++;
        }
   }

    double media = soma / 2.0;
    printf("media = %.2lf\n", media);
    return 0;
}
