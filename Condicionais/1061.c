#include <stdio.h>

int main(void) {
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;

    
    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf(" Dia %d", &d2);          
    scanf("%d : %d : %d", &h2, &m2, &s2);

    long long t1 = (long long)d1 * 24 * 3600 + h1 * 3600 + m1 * 60 + s1;
    long long t2 = (long long)d2 * 24 * 3600 + h2 * 3600 + m2 * 60 + s2;

    long long diff = t2 - t1;      

    long long dias = diff / (24 * 3600); diff %= (24 * 3600);
    long long horas = diff / 3600; diff %= 3600;
    long long minutos = diff / 60;
    long long segundos = diff % 60;

    printf("%lld dia(s)\n", dias);
    printf("%lld hora(s)\n", horas);
    printf("%lld minuto(s)\n", minutos);
    printf("%lld segundo(s)\n", segundos);

    return 0;
}
