#include <stdio.h>

int compara(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    int t1 = 0;
    while (str1[t1] != '\0') t1++;
    if (t1 > 0 && str1[t1-1] == '\n') str1[--t1] = '\0';

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);
    int t2 = 0;
    while (str2[t2] != '\0') t2++;
    if (t2 > 0 && str2[t2-1] == '\n') str2[--t2] = '\0';

    int resultado = compara(str1, str2);

    if (resultado == 0)
        printf("As strings sao iguais.\n");
    else if (resultado < 0)
        printf("\"%s\" vem antes de \"%s\" alfabeticamente.\n", str1, str2);
    else
        printf("\"%s\" vem depois de \"%s\" alfabeticamente.\n", str1, str2);

    return 0;
}
