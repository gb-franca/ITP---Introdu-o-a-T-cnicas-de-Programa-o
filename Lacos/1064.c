#include <stdio.h>

int main() {
    double valor_lido;
    int quantidade_positivo = 0;
    double soma_positivos = 0.0; 
    double media;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &valor_lido);

        if (valor_lido > 0) {
            quantidade_positivo++;
            soma_positivos += valor_lido;

        }
    }
    printf("%d valores positivos\n", quantidade_positivo);

    if (quantidade_positivo > 0) {
        media = soma_positivos / quantidade_positivo;
        printf("%.1lf\n", media);
    }
    
    return 0;
}