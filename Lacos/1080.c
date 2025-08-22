#include <stdio.h>

int main() {
    int valor;
    int maior_valor =0;
    int posicao = 0;

    for(int i = 1; i <= 100; i++) {
        scanf("%d", &valor);

        if(i == 1 || valor > maior_valor) {
            maior_valor = valor;
            posicao = i;
        }
    }
    printf("%d\n", maior_valor);
    printf("%d\n", posicao);
    return 0;
}