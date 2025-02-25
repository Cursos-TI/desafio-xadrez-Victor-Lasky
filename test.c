#include <stdio.h>

int main() {
    int cima = 1;
    while (cima < 2) {
        int direita = 1;
        while (direita < 2) {
            printf("cima\n");
            direita++;
        }
        printf("direita\n");
        cima++;
    }
    return 0;
}