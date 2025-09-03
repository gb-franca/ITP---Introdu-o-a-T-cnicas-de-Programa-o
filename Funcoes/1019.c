#include <stdio.h>

void calculaTempo(int totalSegundos) {  
    int horas, minutos, segundos;

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}

int main(){
    int N;
    scanf("%d", &N);

    calculaTempo(N);

    return 0;
    
}