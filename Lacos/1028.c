#include <stdio.h>

int mdc (int a, int b){
    int temp;

    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int N;
    int f1, f2;

    scanf("%d", &N);

    while(N > 0){
        scanf("%d %d", &f1, &f2);

        printf("%d\n", mdc(f1, f2));

        N--;
    }

    return 0;
}