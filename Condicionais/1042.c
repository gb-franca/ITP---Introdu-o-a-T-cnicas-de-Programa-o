#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x < y && x < z) {
        if(y < z) {
            printf("%d\n%d\n%d\n", x, y, z);
        } else {
            printf("%d\n%d\n%d\n", x, z, y);
        }

    } else if (y < x && y < z) {
        if(x < z) {
            printf("%d\n%d\n%d\n", y, x, z);
        } else {
            printf("%d\n%d\n%d\n", y, z, x);
        }
    } else {
        if(x < y) {
            printf("%d\n%d\n%d\n", z, x, y);
        } else {
            printf("%d\n%d\n%d\n", z, y, x);
        }
    }
    
    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}