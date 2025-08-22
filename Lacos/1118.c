#include <stdio.h>

int main(){
   int opcao;

   do{
        double nota;
        double soma = 0.0;
        int notas_validas = 0;

        while(notas_validas < 2) {
            scanf("%lf", &nota);

            if(nota < 0.0 || nota > 10.0) {
                printf("nota invalida\n");
                continue;
            }

            soma += nota;
            notas_validas++;
        }

        double media = soma / 2.0;
        printf("media = %.2lf\n", media);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &opcao);

        while(opcao != 1 && opcao != 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        }
   } while(opcao == 1);

   return 0;     
}