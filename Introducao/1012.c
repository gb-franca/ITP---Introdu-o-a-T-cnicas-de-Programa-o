#include <stdio.h>

int main() {
    double A, B, C;
    double trianguloArea, circuloArea, trapezioArea, quadradoArea, retanguloArea;

    scanf("%lf %lf %lf", &A, &B, &C);
    trianguloArea = (A * C) / 2.0;
    circuloArea = 3.14159 * C * C;
    trapezioArea = ((A + B) * C) / 2.0;
    quadradoArea = B * B;
    retanguloArea = A * B;

    printf("TRIANGULO: %.3lf\n", trianguloArea);
    printf("CIRCULO: %.3lf\n", circuloArea);
    printf("TRAPEZIO: %.3lf\n", trapezioArea);
    printf("QUADRADO: %.3lf\n", quadradoArea);
    printf("RETANGULO: %.3lf\n", retanguloArea);    
    return 0;
}   