#include <stdio.h>

typedef struct {
    int num;
    int den;
} fracao;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

fracao simplificar(fracao f) {
    int d = mdc(f.num, f.den);
    f.num /= d;
    f.den /= d;
    if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }
    return f;
}

fracao soma(fracao a, fracao b) {
    fracao r;
    r.num = a.num * b.den + b.num * a.den;
    r.den = a.den * b.den;
    return simplificar(r);
}

fracao sub(fracao a, fracao b) {
    fracao r;
    r.num = a.num * b.den - b.num * a.den;
    r.den = a.den * b.den;
    return simplificar(r);
}

fracao mult(fracao a, fracao b) {
    fracao r;
    r.num = a.num * b.num;
    r.den = a.den * b.den;
    return simplificar(r);
}

fracao div(fracao a, fracao b) {
    fracao r;
    r.num = a.num * b.den;
    r.den = a.den * b.num;
    return simplificar(r);
}

void mostrar(fracao f) {
    printf("%d/%d\n", f.num, f.den);
}

int main() {
    fracao f1, f2;

    printf("digite o numerador da primeira fracao: ");
    scanf("%d", &f1.num);
    printf("digite o denominador da primeira fracao: ");
    scanf("%d", &f1.den);

    printf("digite o numerador da segunda fracao: ");
    scanf("%d", &f2.num);
    printf("digite o denominador da segunda fracao: ");
    scanf("%d", &f2.den);

    if (f1.den == 0 || f2.den == 0) {
        printf("denominador nao pode ser zero\n");
        return 1;
    }

    fracao s = soma(f1, f2);
    fracao sb = sub(f1, f2);
    fracao m = mult(f1, f2);
    fracao d = div(f1, f2);

    printf("soma: ");
    mostrar(s);
    printf("subtracao: ");
    mostrar(sb);
    printf("multiplicacao: ");
    mostrar(m);
    printf("divisao: ");
    mostrar(d);

    return 0;
}