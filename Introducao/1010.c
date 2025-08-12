#include <stdio.h>

int main() {
    int p1, p2, pn1, pn2;
    double v1, v2, total;

    scanf("%d %d %lf", &p1, &pn1, &v1);
    scanf("%d %d %lf", &p2, &pn2, &v2);

    total = (pn1 * v1) + (pn2 * v2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);


    return 0;
}   