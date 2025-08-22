#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int q, r;

   
    q = a / b;
    r = a % b;

   
    if (r < 0) {
       
       
        r += abs(b);
        
       
        if (b > 0) {
            q--;
        } else {
            q++;
        }
    }

    printf("%d %d\n", q, r);

    return 0;
}