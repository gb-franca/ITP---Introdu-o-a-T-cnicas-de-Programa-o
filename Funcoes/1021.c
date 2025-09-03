#include <stdio.h>
#include <math.h>


void calcularNotas(int *valor) {
    int notas[] = {100, 50, 20, 10, 5, 2};
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = *valor / notas[i];
        printf("%d nota(s) de R$ %.2f\n", qtd, (float)notas[i]);
        *valor = *valor % notas[i];
    }
}


void calcularMoedas(int centavos) {
    int moedas[] = {100, 50, 25, 10, 5, 1};
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = centavos / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, moedas[i] / 100.0);
        centavos = centavos % moedas[i];
    }
}

int main() {
    double N;
    scanf("%lf", &N);

    
    int valor = (int)N;                       
    int centavos = (int)round((N - valor) * 100); 

    calcularNotas(&valor);
    calcularMoedas(valor * 100 + centavos);

    return 0;
}
