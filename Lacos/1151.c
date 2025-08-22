#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int anterior = 0;
    int atual = 1;
    int proximo;

    for(int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d", anterior);
        } else{
            printf(" %d", atual);

            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }
    }
    printf("\n");
    return 0;
}