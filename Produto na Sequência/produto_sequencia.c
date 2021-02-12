#include <stdio.h>
int main () {
    char s[52];
    int s_int[50], r[6]={0};
    fgets (s, 51, stdin);
    for (int i = 0; i < 50; i++){
        switch (s[i]) {
            case '0':
            s_int[i]=0;
            break;
            case '1':
            s_int[i]=1;
            break;
            case '2':
            s_int[i]=2;
            break;
            case '3':
            s_int[i]=3;
            break;
            case '4':
            s_int[i]=4;
            break;
            case '5':
            s_int[i]=5;
            break;
            case '6':
            s_int[i]=6;
            break;
            case '7':
            s_int[i]=7;
            break;
            case '8':
            s_int[i]=8;
            break;
            default:
            s_int[i]=9;
        }
    }
    for (int i = 0; i < 45; i++) {
        if (r[5] < (s_int[i]*s_int[i+1]*s_int[i+2]*s_int[i+3]*s_int[i+4])) {
            for (int j = 0; j < 5; j++) r[j]=s_int[i+j];
            r[5] = r[0]*r[1]*r[2]*r[3]*r[4];
        }
    }
    printf ("%d %d %d %d %d\n %d", r[0], r[1], r[2], r[3], r[4], r[5]);
    return 0;
}