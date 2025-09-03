#include <stdio.h>
#include <string.h> 


long long contarLeds(char valor[]);

int main() {
    int n; 
  
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char valor[102];
        long long totalLeds;

        scanf("%s", valor);

        totalLeds = contarLeds(valor);

        printf("%lld leds\n", totalLeds);
    }

    return 0;
}

/**
 * @brief 
 * @param valor 
 * @return 
 */
long long contarLeds(char valor[]) {
    long long soma = 0;
    int tamanho = strlen(valor);

    for (int i = 0; i < tamanho; i++) {
        char digito = valor[i];


        switch (digito) {
            case '1': soma += 2; break;
            case '2': soma += 5; break;
            case '3': soma += 5; break;
            case '4': soma += 4; break;
            case '5': soma += 5; break;
            case '6': soma += 6; break;
            case '7': soma += 3; break;
            case '8': soma += 7; break;
            case '9': soma += 6; break;
            case '0': soma += 6; break;
        }
    }
    
    return soma;
}