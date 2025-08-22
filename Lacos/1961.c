    #include <stdio.h>
    #include <stdlib.h> 

    int main() {
        int P, N;
        scanf("%d %d", &P, &N);

        int altura_anterior;
        int altura_atual;

        for (int i = 0; i < N; i++) {
            

            scanf("%d", &altura_atual);

    
            if (i > 0) {

                if (abs(altura_atual - altura_anterior) > P) {
                    printf("GAME OVER\n");
                    return 0; 
                }
            }

            altura_anterior = altura_atual;
        }

        printf("YOU WIN\n");

        return 0;
    }