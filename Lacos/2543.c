    #include <stdio.h>

    int main() {
        int N; 
        int I; 

        while (scanf("%d %d", &N, &I) != EOF) {
            
            int meu_contador_cs = 0; 
            
            for (int k = 0; k < N; k++) {
                int id_jogador, id_jogo;
                scanf("%d %d", &id_jogador, &id_jogo);
                
            
                if (id_jogador == I && id_jogo == 0) {
                    meu_contador_cs++;
                }
            }
            
        
            printf("%d\n", meu_contador_cs);
        }

        return 0;
    }