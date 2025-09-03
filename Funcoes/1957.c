#include <stdio.h>

/**
 * @brief 
 * @param decimal 
 */
void converteParaHex(int decimal) {

    if (decimal == 0) {
        return;
    }

    int resto = decimal % 16;
    
    converteParaHex(decimal / 16);

    if (resto < 10) {

        printf("%d", resto);
    } else {
        printf("%c", resto - 10 + 'A');
    }
}

int main() {
    int v;

    scanf("%d", &v);

    if (v == 0) {
        printf("0\n");
    } else {
        converteParaHex(v);
        printf("\n"); 
    }

    return 0;
}