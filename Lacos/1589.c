#include <stdio.h>

int main() {
    int num_entradas;
    scanf("%d", &num_entradas);

    for (int i = 0; i < num_entradas; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int raio_min = a + b;
        printf("%d\n", raio_min);
    }


    return 0;
}