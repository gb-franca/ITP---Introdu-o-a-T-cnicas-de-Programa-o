#include <stdio.h>

int main(){
    int par[5];
    int impar[5];

    int cont_par = 0;
    int cont_impar = 0;

    int valor;

    for(int i = 0; i < 15; i++){
      scanf("%d", &valor);
      
      if(valor % 2 == 0){
        par[cont_par] = valor;
        cont_par++;

      } else{
        impar[cont_impar] = valor;
        cont_impar++;
      };

      if(cont_par == 5){
        for(int j = 0; j < 5; j++){
            printf("par[%d] = %d\n", j, par[j]);

        };
        cont_par = 0;
      };

      if(cont_impar == 5){
        for(int j = 0; j < 5; j++){
            printf("impar[%d] = %d\n", j, impar[j]);

        };
        cont_impar = 0;
      };
    };

     for (int i = 0; i < cont_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    };

    for (int i = 0; i < cont_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    };
    return 0;
};