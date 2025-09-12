#include <stdio.h>

int main(){
    double N[100];
    double Y;
    scanf("%lf", &Y);

    for(int i = 0; i < 100; i++){
      if(i == 0){
        N[i] = Y;

        } else {
            N[i] = N[i - 1] / 2.0;
        };
        
        printf("N[%d] = %.4lf\n",i , N[i]);
    };
    return 0;
}