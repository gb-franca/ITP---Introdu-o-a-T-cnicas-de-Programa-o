#include <stdio.h>
#include <math.h> 

int main() {
    int N;
    scanf("%d", &N); 

   
    while (N--) {
        int X;
        scanf("%d", &X); 

        int eh_primo = 1; 

        
        if (X <= 1) {
            eh_primo = 0;
        } else {
           
            for (int j = 2; j <= sqrt(X); j++) {
                
                if (X % j == 0) {
                    eh_primo = 0; 
                    break;        
                }
            }
        }

        if (eh_primo == 1) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }

    return 0;
}