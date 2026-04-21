#include <stdio.h>

int main() {
    int n;
    double a, b, c, media;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        media = (a * 2 + b * 3 + c * 5) / 10.0;
        printf("%.1f\n", media);
    }

    return 0;
}
