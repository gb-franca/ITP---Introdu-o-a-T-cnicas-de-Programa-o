#include <stdio.h>
#include <math.h>

void baskara(double a, double b, double c) {
    double delta, r1, r2;

    delta = (b * b) - (4 * a * c);

    if(a == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);

        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    baskara(a, b, c);
    return 0;
}