#include <stdio.h>

void concatena(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0')
        i++;

    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

static void removeNewline(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    if (i > 0 && s[i-1] == '\n') s[i-1] = '\0';
}

int main() {
    char str1[200];
    char str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    removeNewline(str1);

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);
    removeNewline(str2);

    concatena(str1, str2);
    printf("Resultado: %s\n", str1);

    return 0;
}
