#include <stdio.h>

void paraMinusculas(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
}

int main() {
    char s[100];

    printf("Digite uma string: ");
    fgets(s, 100, stdin);

    paraMinusculas(s);
    printf("Resultado: %s", s);

    return 0;
}
