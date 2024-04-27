#include <stdio.h>
#include <math.h>

typedef struct {
    float X;
    float Y;
} Ponto;

float distanciaEntrePontos(Ponto A, Ponto B) {
    return sqrt(pow(B.X - A.X, 2) + pow(B.Y - A.Y, 2));
}

typedef struct {
    Ponto A;
    Ponto B;
    Ponto C;
} Triangulo;

float areaTriangulo(Triangulo t) {
    float det = fabs(t.A.X * t.B.Y + t.B.X * t.C.Y + t.C.X * t.A.Y - t.B.X * t.A.Y - t.C.X * t.B.Y - t.A.X * t.C.Y);
    return det / 2.0;
}

int main() {
    Ponto A = {1, 2};
    Ponto B = {3, 8};
    Ponto C = {5, 1};
    Triangulo t = {A, B, C};
    float area = areaTriangulo(t);
    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}
