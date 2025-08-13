#include <stdio.h>

int main() {
    int codigo_lanche, quantidade;
    double valor_total;

    scanf("%d %d", &codigo_lanche, &quantidade);

    switch (codigo_lanche) {
        case 1:
            valor_total = quantidade * 4.00;
            printf("Total: R$ %.2lf\n", valor_total);

            break;
        case 2:
            valor_total = quantidade * 4.50;
            printf("Total: R$ %.2lf\n", valor_total);

            break;
        case 3:
            valor_total = quantidade * 5.00;
            printf("Total: R$ %.2lf\n", valor_total);

            break;
        case 4:
            valor_total = quantidade * 2.00;
            printf("Total: R$ %.2lf\n", valor_total);

            break;
        case 5:
            valor_total = quantidade * 1.50;
            printf("Total: R$ %.2lf\n", valor_total);
            break;
    }

    return 0;
}