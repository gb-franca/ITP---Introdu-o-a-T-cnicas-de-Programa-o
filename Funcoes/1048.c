#include <stdio.h>

void reajusteSalario(double salario){
    double reajuste;
    double salario_reajuste;
    int percentual;

    if (salario <= 400.00) {
        percentual = 15;
        reajuste = salario * 0.15;
        
    } else if (salario <= 800.00){ 
        percentual = 12;
        reajuste = salario * 0.12;

    } else if (salario <= 1200.00) {
        percentual = 10;
        reajuste = salario * 0.10;

    } else if (salario <= 2000.00){ 
        percentual = 7;
        reajuste = salario * 0.07;

    } else {
        percentual = 4;
        reajuste = salario * 0.04; 
    }
    
    salario_reajuste = salario + reajuste;

    printf("Novo salario: %.2f\n", salario_reajuste);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);
}

int main() {
    double salario;

    scanf("%lf", &salario);

    reajusteSalario(salario);
    return 0;
}