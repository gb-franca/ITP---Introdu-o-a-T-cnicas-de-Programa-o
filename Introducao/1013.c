#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int maior_entre_AB = (A + B + abs(A - B)) / 2;
    int maior_entre_ABC = (maior_entre_AB + C + abs(maior_entre_AB - C)) / 2;

    printf("%d eh o maior\n", maior_entre_ABC);
    return 0;
}