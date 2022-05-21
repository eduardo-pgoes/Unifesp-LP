/*
    Laboratório 01 - <CODE17>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que transforme segundos em horas, minutos e segundos.
*/

int main() {
    int tempo, horas, minutos, segundos;
    printf("Insira os segundos: ");
    scanf("%d", &tempo);
    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;
    printf("%dh %dm %ds \n", horas, minutos, segundos);
}