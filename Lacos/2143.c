#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T != 0) {
        

        for (int i = 0; i < T; i++) {
            int N;
            scanf("%d", &N);


            int total_pedidos = 2 * N - 2; 
            
            if (N % 2 != 0){

                total_pedidos = (N-1)*2 + 1;
            } else {

                total_pedidos = (N-2)*2 + 2;
            }


            printf("%d\n", total_pedidos);
        }
        

        scanf("%d", &T);
    }

    return 0;
}