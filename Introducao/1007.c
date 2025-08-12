#include <stdio.h>

int main() {
    int num1, num2, num3, num4, def;
    
    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%i", &num3);
    scanf("%i", &num4);

    def = (num1 * num2) - (num3 * num4);
    printf("DIFERENCA = %i\n", def); 

    return 0;
}   