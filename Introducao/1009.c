#include <stdio.h>

int main() {
    char nome[50];
    double salario_fixo, vendas, total_salario;

    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &vendas);

    total_salario = salario_fixo + (vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total_salario);


    return 0;
}   