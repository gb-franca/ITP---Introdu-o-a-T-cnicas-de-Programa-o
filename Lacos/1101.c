#include <stdio.h>

int main() {
    int m, n;


    while (1) {
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0) {
            break;
        }

        int menor, maior;
        int soma = 0;

        if (m < n) {
            menor = m;
            maior = n;
        } else {
            menor = n;
            maior = m;
        }


        for (int i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
        }

        printf("Sum=%d\n", soma);
    }

    return 0;
}