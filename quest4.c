#include <stdio.h>

typedef struct {
    float base;
    float altura;
} retangulo;

retangulo criar_retangulo(float b, float a) {
    retangulo r;
    r.base = b;
    r.altura = a;
    return r;
}

float calcular_area(retangulo r) {
    return r.base * r.altura;
}

float calcular_perimetro(retangulo r) {
    return 2 * (r.base + r.altura);
}

int main() {
    float b, a;
    retangulo r;

    printf("digite a base do retangulo: ");
    scanf("%f", &b);
    printf("digite a altura do retangulo: ");
    scanf("%f", &a);

    r = criar_retangulo(b, a);

    printf("area: %.2f\n", calcular_area(r));
    printf("perimetro: %.2f\n", calcular_perimetro(r));

    return 0;
}