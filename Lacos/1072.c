#include <stdio.h>

int main(){
    int X;
    int casos;
    int in = 0, out = 0;
    scanf("%d", &X);

    for(int i = 1; i <= X; i++){ 
        scanf("%d", &casos);

        if(10 <= casos && casos <= 20){
            in++;
        } else {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}