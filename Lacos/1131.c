#include <stdio.h>

int main() {
    int opcao;
    int inter, gremio;
    int grenais = 0, empate = 0;
    int inter_vitoria = 0, gremio_vitoria = 0;

    do{
        scanf("%d %d", &inter, &gremio);
        grenais++;
        

        if(inter > gremio) {
            inter_vitoria++;
            

        } else if(gremio > inter) {
            gremio_vitoria++;
            

        } else {
            empate++;    
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);

        while(opcao != 1 && opcao != 2) {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        }


    }while(opcao == 1);

        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", inter_vitoria);
        printf("Gremio:%d\n", gremio_vitoria);
        printf("Empates:%d\n", empate);

        if(inter_vitoria > gremio_vitoria) {
            printf("Inter venceu mais\n");
                
        } else if(gremio_vitoria > inter_vitoria) {
                printf("Gremio venceu mais\n");
        }
    
    return 0;
}