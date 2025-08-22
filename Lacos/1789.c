    #include <stdio.h>

    int main() {
    int L;
    
    while(scanf("%d", &L) != EOF){
        int max_velocidade = 0;

        for(int i = 0; i < L; i++){
            int velocidade_atual;
            scanf("%d", &velocidade_atual);

            if(velocidade_atual > max_velocidade){
                max_velocidade = velocidade_atual;
            }
        }

        if(max_velocidade < 10){
            printf("1\n");
        } else if( max_velocidade < 20){
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
        return 0;
    }