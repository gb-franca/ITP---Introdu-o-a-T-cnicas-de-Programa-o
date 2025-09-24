#include <stdio.h>

int main(){
    double matriz[12][12];
    double soma = 0.0;
    int soma_elementos = 0;
    char operacao;

    scanf(" %c", &operacao);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        };
    };

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if(j > i){
                soma += matriz[i][j];
                soma_elementos++;
            }
        }

    }

    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    } else if(operacao == 'M'){
        printf("%.1lf\n", soma / soma_elementos);
    }

    return 0;
}