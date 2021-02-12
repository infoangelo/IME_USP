#include <stdio.h>
void converte_hora(int total_segundos, int *hora, int *min, int *seg) {
    *hora=total_segundos/3600;
    total_segundos%=3600;
    *min=total_segundos/60;
    *seg=total_segundos%60;
}
int main () {
    int total_seg, h, m, s;
    scanf ("%d", &total_seg);
    converte_hora(total_seg, &h, &m, &s);
    printf ("%02d:%02d:%02d", h, m, s);
    return 0;
}