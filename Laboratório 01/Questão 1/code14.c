/*
    Laboratório 01 - <CODE14>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que calcula a distância entre dois pontos, seguindo os teoremas da Geometria Analítica.
*/

#include <stdio.h>
#include <math.h>

// Função que calcula a distância entre dois pontos usando as coordenadas (Xa, Ya) e (Xb, Yb)
float distancia(float xa, float ya, float xb, float yb){
    float deltaX = xa - xb;
    float deltaY = ya - yb;

    return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}

int main() {
    float xa, ya, xb, yb;
    
    printf("Insira as coordenadas do ponto A e B (Ax, Ay) (Bx, By): ");
    scanf("(%f, %f) (%f, %f)", &xa, &ya, &xb, &yb);

    printf("Distancia entre os pontos (%f, %f) e (%f, %f) eh %f", xa, ya, xb, yb, distancia(xa, ya, xb, yb));
    return 0;
}
