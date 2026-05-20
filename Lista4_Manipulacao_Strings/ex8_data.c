#include <stdio.h>

int ehDigito(char c) {
    return c >= '0' && c <= '9';
}

int validaData(char s[]) {
    // Formato esperado: DD/MM/AAAA (10 caracteres)
    int tam = 0;
    while (s[tam] != '\0') tam++;
    if (tam != 10) return 0;

    if (s[2] != '/' || s[5] != '/') return 0;

    for (int i = 0; i < 10; i++) {
        if (i == 2 || i == 5) continue;
        if (!ehDigito(s[i])) return 0;
    }
    return 1;
}

int main() {
    char s[20];

    printf("Digite uma data (DD/MM/AAAA): ");
    fgets(s, 20, stdin);

    int tam = 0;
    while (s[tam] != '\0') tam++;
    if (tam > 0 && s[tam-1] == '\n') s[--tam] = '\0';

    if (!validaData(s)) {
        printf("Formato invalido!\n");
        return 1;
    }

    int dia  = (s[0] - '0') * 10 + (s[1] - '0');
    int mes  = (s[3] - '0') * 10 + (s[4] - '0');
    int ano  = (s[6] - '0') * 1000 + (s[7] - '0') * 100
             + (s[8] - '0') * 10   + (s[9] - '0');

    printf("Dia: %d\nMes: %d\nAno: %d\n", dia, mes, ano);

    return 0;
}
