#include <stdio.h>
#include <locale.h>
#include <math.h>


float hypotenuse(float a, float b);

float hypotenuse(float a, float b) {
    return sqrt((a*a) + (b*b))
}

int main() {
    setlocale(LC_ALL, "");

    float a, b;
    scanf("%f %f", &a, &b);
    wprintf("h: %.2f\n", hypotenuse(a, b));
    return 0;
}