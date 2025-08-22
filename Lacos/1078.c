#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i =1; i <= 10; i++){
        printf("%d x %d = %d\n", i, N, N*i);
    }

    return 0;
}