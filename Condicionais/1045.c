#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);


    double A, B, C;
    

    if (a >= b && a >= c) {
        A = a;
        B = (b > c) ? b : c;
        C = (b <= c) ? b : c;
    } else if (b >= a && b >= c) {
        A = b;
        B = (a > c) ? a : c;
        C = (a <= c) ? a : c;
    } else { 
        A = c;
        B = (a > b) ? a : b;
        C = (a <= b) ? a : b;
    }

    
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {

        if (A*A == B*B + C*C) {
            printf("TRIANGULO RETANGULO\n");
        } else if (A*A > B*B + C*C) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else { 
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || B == C || A == C) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}