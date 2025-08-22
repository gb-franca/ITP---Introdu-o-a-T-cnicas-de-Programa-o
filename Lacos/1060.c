#include <stdio.h>

int main() {
    double valor_lido;
    int quantidade_positivo = 0;

    for(int i = 0; i < 6; i++) {

        scanf("%lf", &valor_lido);

        if(valor_lido > 0) {
            quantidade_positivo++;
        }
    }
    printf("%d valores positivos\n", quantidade_positivo);
    return 0;
}