#include <stdio.h>

int main() {
    int km;
    double litros, consumo;

    scanf("%d %lf", &km, &litros);
    consumo = km / litros;
    printf("%.3lf km/l\n", consumo);

    return 0;
}