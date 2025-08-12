#include <stdio.h>

int main() {
    
    double pi = 3.14159;
    double r, a;

    
    scanf("%lf", &r);

    a = pi * (r * r);

    
    printf("A=%.4lf\n", a);

    return 0;
}