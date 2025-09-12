#include <stdio.h>

int main(){
    int N[10];
    int V; 
    scanf("%d", &V);

    for(int i =0; i < 10; i++){
        if(i == 0){
            N[i] = V;
        } else{
            N[i] = N[i - 1] * 2;

        };

        printf("N[%d] = %d\n", i, N[i]);
    };

    return 0;
};