#include <stdio.h>

int main() {
    int X, Y;
    int min, max;
    int soma = 0;

    scanf("%d %d", &X, &Y);

    if(X < Y) {
        min = X;
        max = Y;
    } else {
        min = Y;
        max = X;
    }

    for(int i = min + 1; i < max; i++) {
        
        if(i % 2 != 0) {
            soma += i;
        }

    }
    
    printf("%d\n", soma);
    return 0;
}