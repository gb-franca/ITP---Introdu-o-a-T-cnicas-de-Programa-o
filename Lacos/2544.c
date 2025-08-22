    #include <stdio.h>

    int main() {
        int N; 
    
        while (scanf("%d", &N) != EOF) {
            
            int contador_jutsu = 0;

            while (N > 1) {
                N = N / 2;         
                contador_jutsu++;   
            }

            printf("%d\n", contador_jutsu);
        }

        return 0;
    }