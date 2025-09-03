#include <stdio.h>

void imprimeSequenciaPUM(int n) {
    int contador = 1; 


    for (int i = 0; i < n; i++) {
        
        printf("%d %d %d PUM\n", contador, contador + 1, contador + 2);
        contador += 4;
    }
}

int main() {
    int numeroDeLinhas;
    scanf("%d", &numeroDeLinhas);

    imprimeSequenciaPUM(numeroDeLinhas);
    return 0;
}