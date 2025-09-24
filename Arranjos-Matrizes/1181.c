
#include <stdio.h>

int main(){
    double matriz[12][12];
    double soma = 0.0;
    char operacao;
    int L;

    scanf("%d", &L);
    scanf(" %c", &operacao);

    for(int i = 0; i < 12; i++){
        for(int j =0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        };
    };

    for(int j = 0; j < 12; j ++){
        soma += matriz[L][j];
    };

    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    } else if(operacao == 'M'){
        printf("%.1lf\n", soma / 12.0);
    }


    return 0;
}