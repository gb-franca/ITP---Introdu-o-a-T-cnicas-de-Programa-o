#include <stdio.h>

int main() {
    int valor_lido;
    int quantidade_par = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &valor_lido);

        if(valor_lido % 2 == 0) {
            quantidade_par++;
        }
    }

    printf("%d valores pares\n", quantidade_par);
    return 0;
}