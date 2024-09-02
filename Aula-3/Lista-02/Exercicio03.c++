#include<stdio.h>

void tempo(int *s, int *h, int *,int segundos);

int main()
{
    int s, m, h, segundos;
    printf("Informe os segundos: \n");
    scanf("%d", &segundos);
    tempo(&s, &h, &m, segundos);
    printf("Horas: %d, minutos: %d, segundos %d\n", h, m, s);
    return 0;
}

void tempo(int *s, int *h, int *m, int segundos)
{
    int auxiliar;
    *h = segundos / 3600;
    auxiliar = segundos % 3600;
    *m = auxiliar / 60;
    *s = auxiliar % 60;

}