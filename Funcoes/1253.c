#include <stdio.h>
#include <string.h> 


void decodificarCesar(char sentenca[], int deslocamento);

int main() {
    int n; 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        char sentencaCodificada[51];
        int deslocamento;

        scanf("%s", sentencaCodificada);
        scanf("%d", &deslocamento);

        decodificarCesar(sentencaCodificada, deslocamento);

        printf("%s\n", sentencaCodificada);
    }

    return 0;
}

/**
 * @brief 
 * @param sentenca
 * @param deslocamento 
 */
void decodificarCesar(char sentenca[], int deslocamento) {
    int tamanho = strlen(sentenca);

   
    for (int i = 0; i < tamanho; i++) {

        char letra = sentenca[i];

        char letraDecodificada = letra - deslocamento;

        if (letraDecodificada < 'A') {
            letraDecodificada = letraDecodificada + 26;
        }

        sentenca[i] = letraDecodificada;
    }
}