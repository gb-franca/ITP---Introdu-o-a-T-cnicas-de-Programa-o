#include <stdio.h>

int main() {
    int qnt_entrada;
    int valor_entrada;
    char tipo_entrada;
    int valor_total = 0;
    int qnt_C = 0;
    int qnt_R = 0;
    int qnt_S = 0;

    scanf("%d", &qnt_entrada);

    for(int i = 1; i <= qnt_entrada; i++) {
        scanf("%d %c", &valor_entrada, &tipo_entrada);

        if(tipo_entrada == 'C') {
            qnt_C += valor_entrada;

        } else if(tipo_entrada == 'R') {
            qnt_R += valor_entrada;

        } else if(tipo_entrada == 'S') {
            qnt_S += valor_entrada;
        }
    }
    valor_total = qnt_C + qnt_R + qnt_S;
    printf("Total: %d cobaias\n", valor_total);
    printf("Total de coelhos: %d\n", qnt_C);
    printf("Total de ratos: %d\n", qnt_R);
    printf("Total de sapos: %d\n", qnt_S);
    printf("Percentual de coelhos: %.2lf %%\n", (qnt_C * 100.0) / valor_total);
    printf("Percentual de ratos: %.2lf %%\n", (qnt_R * 100.0) / valor_total);
    printf("Percentual de sapos: %.2lf %%\n", (qnt_S * 100.0) / valor_total);
    return 0;
}