#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    while(scanf("%d", &a) == 1 && a != 0) {
        scanf("%d %d", &b, &c);

        double area_casa = a * b;
        double area_terreno = area_casa / (c / 100.0);
        double lado = sqrt(area_terreno);

        int lado_truncado = (int)lado;
        printf("%d\n", lado_truncado);
    }
    return 0;
}