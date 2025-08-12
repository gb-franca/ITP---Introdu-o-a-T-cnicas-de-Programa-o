#include <stdio.h>

int main() {
    double num1, num2, num3, media;

    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);

    printf("MEDIA = %.1lf\n", (num1 * 2  + num2 * 3 + num3 * 5 ) /10.0); 

    return 0;
}   