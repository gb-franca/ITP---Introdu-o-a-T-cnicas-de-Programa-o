#include <stdio.h>

int main() {
    int r;
    const double pi = 3.14159;
    double volume;

    scanf("%d", &r);
    volume = (4.0 / 3.0) * pi * r * r * r;
    printf("VOLUME = %.3lf\n", volume);
    

    return 0;
}   