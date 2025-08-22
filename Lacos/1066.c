#include <stdio.h>

int main() {
    int valor_lido;
    int quantidade_impar = 0;
    int quantidade_par = 0;
    int valores_positivos = 0;
    int valores_negativos = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &valor_lido);

        if (valor_lido % 2 == 0) {
            quantidade_par++;

        } else {
            quantidade_impar++;
        }

        if(valor_lido > 0) {
            valores_positivos++;
        } else if (valor_lido < 0) {
            valores_negativos++;
        }
    } 
    printf("%d valor(es) par(es)\n", quantidade_par);
    printf("%d valor(es) impar(es)\n", quantidade_impar);
    printf("%d valor(es) positivo(s)\n", valores_positivos);
    printf("%d valor(es) negativo(s)\n", valores_negativos);

    return 0;
}