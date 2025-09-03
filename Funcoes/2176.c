#include <stdio.h>
#include <string.h>

char calcularBitParidade(char mensagem[]);

int main() {
    char s[102];

    while (scanf("%s", s) != EOF) {
        
        printf("%s%c\n", s, calcularBitParidade(s));
    }

    return 0;
}

/**
 * @brief 
 * @param mensagem 
 * @return 
 */
char calcularBitParidade(char mensagem[]) {
    int contagemDeUns = 0;
    int tamanho = strlen(mensagem);

    for (int i = 0; i < tamanho; i++) {
        if (mensagem[i] == '1') {
            contagemDeUns++;
        }
    }

    if (contagemDeUns % 2 == 0) {
        return '0';
    } else {
        return '1';
    }
}