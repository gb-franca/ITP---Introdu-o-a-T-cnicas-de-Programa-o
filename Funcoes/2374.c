#include <stdio.h>

/**
 * @brief 
 * @param desejada 
 * @param lida 
 * @return 
 */
int calcularDiferenca(int desejada, int lida) {
    return desejada - lida;
}

int main() {
    int pressao_desejada;
    int pressao_lida;

    scanf("%d", &pressao_desejada);
    scanf("%d", &pressao_lida);

    int diferenca = calcularDiferenca(pressao_desejada, pressao_lida);

    printf("%d\n", diferenca);

    return 0;
}