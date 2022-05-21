/*
    Laboratório 02
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Faça um programa que calcule equações fundamentais da física. Considere as seguintes equações:
            2.a) Equação fundamental da calorimetria - FEITO
            2.b) Equação fundamental da ondulatória - FEITO
            2.c) Potência elétrica - FEITO
            2.d) Lei de Ohm - FEITO - FEITO
            2.e) Associação de resistires (Considere 3 resistores) - FEITO
            2.f) Energia mecânica - FEITO
            2.g) Energia cinêtica - FEITO
            2.h) Energia potencial gravitacional - FEITO
            2.i) Energia potencial elástica - FEITO
            2.j) Força elétrica
            2.k) Aceleração média
            2.l) Velocidade média
            2.m) Movimento uniforme (MU)
            2.n) Movimento uniforme variado (MUV)
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

// Definição de constantes comuns da física
#define V_LUZ 2.99792e8
#define G 9.81
#define K_ELETROSTATICA 9e9

/*
    Funções sobre a equação fundamental da calorimetria - item a)
*/

// Função que calcula o calor transferido em um material para uma certa variação de temperatura
float calor(float massa, float calorEspecifico, float deltaTemp) {
    return massa * calorEspecifico * deltaTemp;
}

// Função que calcula o calor específico de um material, levando em conta sua massa, calor transferido e variação de temperatura
float calorEspecifico(float massa, float calor, float deltaTemp) {
    return calor / (massa * deltaTemp);
}

/*
    Funções sobre a equação fundamental da ondulatória - item b)
*/

// Função que calcula o comprimento de uma onda, segundo a equação fundamental da ondulatória
float comprimentoOnda(float frequencia) {
    return V_LUZ / frequencia;
}

// Função que calcula o comprimento de uma onda, segundo a equação fundamental da ondulatória
float frequencia(float compOnda) {
    return V_LUZ / compOnda;
}

/*
    Funções sobre potência elétrica - item c)
*/

// Função que calcula a potência elétrica de um circuito, recebendo sua intensidade e a diferença de potencial como parâmetros
float potenciaEletrica(float i, float ddp) {
    return (i * ddp);
}

/*
    Funções sobre Lei de Ohm - item d)
*/

float ddp(float i, float r) {
    return (i * r);
}

float intensidadeCorrente(float ddp, float r) {
    return ddp / r;
}

float resistenciaCorrente(float ddp, float i) {
    return ddp / i;
}

/*
    Funções sobre associação de resistores - item e)
*/

float associacaoParalela(float r1, float r2, float r3) {
    return 1 / ((1/r1) + (1/r2) + (1/r3));
}

float associacaoEmSerie(float r1, float r2, float r3) {
    return r1 + r2 + r3;
}

/*
    Funções sobre energia mecânica - item f)
*/

float energiaMecanica(float energiaPotencial, float energiaCinetica) {
    return energiaPotencial + energiaCinetica;
}

/*
    Funções sobre energia cinética - item g)
*/

float energiaCinetica(float m, float v) {
    return (m * pow(v, 2)) / 2;
}

/*
    Funções sobre energia potencial gravitacional - item h)
*/

float energiaPotencialGravitacional(float h, float m) {
    return m * G * h;
}

/*
    Funções sobre energia potencial elástica - item i)
*/

float energiaPotencialElástica(float k, float x) { 
    return (k * pow(x, 2)) / 2;
}

/*
    Funções sobre força elétrica - item j)
*/

float forcaEletrica(float q1, float q2, float d) {
    return K_ELETROSTATICA * ((q1 * q2) / pow(d, 2));
}

/*
    Funções sobre Cinemática - itens k) a n)
*/

// Item 2k)
float aceleracaoMedia(float deltaV, float t) {
    return deltaV / t;
}

float velocidadeMedia(float deltaS, float t) {
    return deltaS / t;
}

/*
    Fórmulas sobre Movimento Uniforme - item m)
*/

float posicaoMU(float s0, float v0, float t) {
    return s0 + (v0 * t);
}

float velocidadeMU(float v0, float t) {
    return (v0 * t);
}

/*
    Fórmulas sobre Movimento Uniformemente Variado - item n)
*/

float posicaoMUV(float v0, float s0, float a, float t) {
    return (s0) + (v0*t) + (a * pow(t, 2) / 2);
}

float velocidadeMUV(float v0, float a, float t) {
    return v0 + a*t;
}

int main() 
{
    // Regionalização, para permitir acentos ao chamar a wprintf
    setlocale(LC_ALL, "");

    // Variável que identificará qual é o campo da física envolvido no problema. 
    int ramo;    
    
    // Função diferente do printf que permite o uso de acentos =)
    wprintf(L"Seu problema pertence a qual campo da física?\n");
    wprintf(L"1 - Calorimetria\n");  
    wprintf(L"2 - Ondulatória\n");
    wprintf(L"3 - Eletrodinâmica\n");
    wprintf(L"4 - Trabalho e Energia\n");
    wprintf(L"5 - Eletrostática\n");
    wprintf(L"6 - Cinemática\n");
    scanf("%d", &ramo);

    // Variável que declara o tipo de problema, a ser usada em todos os ramos da física.
    int tipoProblema;

    // Em problemas com mais de uma variável possível, essa variável define qual será escolhida
    int variavelDesejada;
    switch (ramo) 
    {
        // Item 2a) - Equação fundamental da calorimetria
        case 1:
            wprintf(L"Você deseja saber o calor transferido ou o calor específico de um material?\n");
            wprintf(L"1 - Calor transferido\n2 - Calor específico\n");
            scanf("%d", &tipoProblema);
            switch (tipoProblema) {
                // Cálculo do calor transferido em um corpo
                case 1:
                    float m, c, deltaT1;
                    wprintf(L"Insira a massa, o calor específico e a variação de temperatura.\n");
                    scanf("%f %f %f", &m, &c, &deltaT1);
                    wprintf(L"Calor transferido: %.2f cal\n", calor(m, c, deltaT1));
                    break;

                // Cálculo do calor específico de um corpo
                case 2:
                    float massa, calor, deltaT2;
                    wprintf(L"Insira a massa, o calor transferido e a variação de temperatura.\n");
                    scanf("%f %f %f", &m, &calor, &deltaT2);
                    wprintf(L"Calor específico do corpo: %.2f cal/grau Celsius\n", calorEspecifico(m, calor, deltaT2));
                    break;

                // Caso padrão
                default:
                    printf("Entrada inválida, execute o programa novamente.\n");
            }
            break;

        // Item 2b) - Equação fundamental da ondulatória
        case 2:
            wprintf(L"Você deseja saber o comprimento de onda ou a frequência?\n");
            wprintf(L"1 - Comprimento de onda\n2 - Frequência\n");
            scanf("%d", &tipoProblema);

            switch (tipoProblema) {

                // Cálculo do comprimento de umda onda
                case 1:
                    float f;
                    wprintf(L"Insira a frequência da onda.\n");
                    scanf("%f", &f);
                    wprintf(L"Comprimento da onda: %.2f m\n", comprimentoOnda(f));
                    break;

                // Cálculo da frequência de uma onda
                case 2:
                    float compOnda;
                    wprintf(L"Insira o comprimento da onda.\n");
                    scanf("%f", &compOnda);
                    wprintf(L"Frequência da onda: %.2f hz\n", frequencia(compOnda));
                    break;
                
                // Caso padrão
                default:
                    printf("Entrada inválida, execute o programa novamente.\n");
            }
            break;
        
        // Resolução dos problemas de eletrodinâmica
        case 3:
            wprintf(L"O que você deseja calcular?\n");
            wprintf(L"1 - Potência elétrica\n2 - Lei de Ohm\n3 - Associação de resistores\n");
            scanf("%d", &tipoProblema);
            // Variáveis de intensidade da corrente (A), diferença de potencial (V) e resistência (ohms)
            float i, v, r;
            switch (tipoProblema) {

                // Item 2c) - Potência elétrica
                case 1:
                    wprintf(L"Insira a intensidade da corrente e a diferença de potencial (voltagem).\n");
                    scanf("%f %f", &i, &v);
                    wprintf(L"Potência elétrica: %.2f W\n", potenciaEletrica(i, v));
                    break;

                // Item 2d) - Lei de Ohm
                case 2:
                    // Existem 3 variáveis envolvidas na Lei de Ohm...
                    wprintf(L"Você deseja saber a resistência, a diferença de potencial ou a intensidade de um circuito?\n");
                    wprintf(L"1 - Resistencia\n2 - DDP\n3 - Intensidade");
                    scanf("%d", &variavelDesejada);

                    switch (variavelDesejada) {
                        // Cálculo da resistência de um circuito
                        case 1:
                            wprintf(L"Insira a intensidade e a ddp do circuito.\n");
                            scanf("%f %f", &i, &v);
                            r = resistenciaCorrente(v, i);
                            wprintf(L"Resistência: %.2f ohm(s)\n", r);
                            break;

                        // Cálculo da DDP de um circuito
                        case 2:
                            wprintf(L"Insira a intensidade e a resistência do circuito.\n");
                            scanf("%f %f", &i, &r);
                            v = ddp(i, r);
                            wprintf(L"Diferença de potencial: %.2f V\n", v);
                            break;

                        // Cálculo da intensidade da corrente de um circuito
                        case 3:
                            wprintf(L"Insira a ddp e a resistência do circuito.\n");
                            scanf("%f %f", &v, &r);
                            i = intensidadeCorrente(v, r);
                            wprintf(L"Intensidade da corrente: %.2f A\n", i);
                            break;
                        
                        default:
                            break;
                    }
                    break;

                // Item 2e) - Associação de resistores
                case 3:
                    // Variável que identifica o tipo de associação de resistores (série / paralelo)
                    int tipoAssociacao;
                    float r1, r2, r3;
                    wprintf(L"Sua associação de resistores será em série ou paralela?\n");
                    wprintf(L"1 - Em série\n2 - Paralela\n");
                    scanf("%d", &tipoAssociacao);
                    wprintf(L"Insira o valor da resistência dos três resistores.\n");
                    scanf("%f %f %f", &r1, &r2, &r3);
                    switch (tipoAssociacao)
                    {
                        case 1:
                            wprintf(L"Resistor equivalente: %.2f ohm(s)\n", associacaoEmSerie(r1, r2, r3));
                            break;
                        
                        case 2:
                            wprintf(L"Resistor equivalente: %.2f ohm(s)\n", associacaoParalela(r1, r2, r3));
                            break;

                        default:
                            break;
                    }
                    break;
                // Caso padrão
                default:
                    printf("Entrada inválida, execute o programa novamente.\n");
                    break;
            }
            break;

        // Resolução dos problemas envolvendo trabalho / energia
        case 4:
            wprintf(L"Qual é o tipo de energia que você deseja saber?\n");
            wprintf(L"1 - Energia mecânica\n2 - Energia cinética\n3 - Energia potencial gravitacional");
            scanf("%d", &tipoProblema);
            float m;

            // Switch que controla o tipo de energia a ser calculada
            switch (tipoProblema) {
                // Item 2f) - Energia mecânica
                case 1:
                    // Variáveis de energia potencial e energia cinética
                    float ePot, eCin;
                    wprintf(L"Insira a energia cinética e a energia potencial do corpo:\n");
                    scanf("%f %f", &ePot, &eCin);
                    wprintf(L"Energia mecânica do corpo: %.2f J", energiaMecanica(ePot, eCin));
                    break;

                // Item 2g) - Energia cinética
                case 2:
                    float v;
                    wprintf(L"Insira a massa e a velocidade do corpo:\n");
                    scanf("%f %f", &m, &v);
                    wprintf(L"Energia cinética do corpo: %.2f J", energiaCinetica(m, v));
                    break;

                // Item 2h) - Energia potencial gravitacional
                case 3:
                    float h;
                    wprintf(L"Insira a massa e a altura do corpo:\n");
                    scanf("%f %f", &m, &h);
                    wprintf(L"Energia potencial gravitacinal do corpo: %.2f J", energiaPotencialGravitacional(h, m));
                    break;

                // Item 2i) - Energia potencial elástica
                case 4:
                    float k, x;
                    wprintf(L"Insira o coeficiente elástico da mola e a sua distensão.\n");
                    scanf("%f %f", &k, &x);
                    wprintf(L"Energia potencial elástica: %.2f J", energiaPotencialElástica(k, x));
                    break;

                default:
                    break;
            }
            break;

        // Item 2j) - Força elétrica
        case 5:
            float q1, q2, d;
            wprintf(L"Insira o valor da carga 1, carga 2 e a distância entre as cargas.\n");
            scanf("%f %f %f", &q1, &q2, &d);
            wprintf(L"Força eletrostática exercida entre as cargas: %.2f N\n", forcaEletrica(q1, q2, d));
            break;
                
        // Resolução dos problemas de cinemática
        case 6:
            wprintf(L"O tipo de movimento é:\n");
            wprintf(L"1 - Indefinido\n2 - Movimento Uniforme\n3 - Movimento Uniformemente Variado");
            scanf("%d", &tipoProblema);
            float s0, t, v0;
            switch (tipoProblema) {
                case 1:
                    // Variável que decide se será calculada velocidade ou aceleração média
                    int var;
                    wprintf(L"Você deseja calcular velocidade ou aceleração média?\n");
                    wprintf(L"1 - Aceleração\n2 - Velocidade");
                    scanf("%d", &variavelDesejada);
                    switch(variavelDesejada) {
                        // Item 2k) - Aceleração média
                        case 1:
                            float deltaV;
                            wprintf(L"Insira a variação em velocidade e o tempo:\n");
                            scanf("%f %f", &deltaV, &t);
                            wprintf(L"Aceleração média: %.2f m/s^2\n", aceleracaoMedia(deltaV, t));
                            break;
                        // Item 2l) - Velocidade média
                        case 2:
                            wprintf(L"Insira a variação de espaço e o tempo:\n");
                            scanf("%f %f", &s0, &t);
                            wprintf(L"Velocidade média: %.2f m/s\n", velocidadeMedia(s0, t));
                            break;
                    }
                    break;
                // Item 2m) - Movimento Uniforme
                case 2:
                    wprintf(L"Você deseja saber a posição ou a velocidade do móvel?\n");
                    wprintf(L"1 - Posição\n2 - Velocidade");
                    scanf("%d", &variavelDesejada);
                    switch (variavelDesejada) {
                        case 1:
                            wprintf(L"Insira a posição inicial (s0), a velocidade e o tempo.\n");
                            scanf("%f %f %f", &s0, &v0, &t);
                            wprintf(L"Posição do móvel: %.2f m\n", posicaoMU(s0, v0, t));
                            break;
                        case 2:
                            wprintf(L"Insira a velocidade inicial e o tempo.\n");
                            scanf("%f %f", &v0, &t);
                            wprintf(L"Velocidade do móvel: %.2f m/s", velocidadeMU(v0, t));
                            break;
                    }
                    break;
                // Item 2n) - Movimento Uniformemente Variado
                case 3:
                    wprintf(L"Você deseja saber a posição ou a velocidade do móvel?");
                    float a;
                    wprintf(L"1 - Posição\n2 - Velocidade");
                    scanf("%d", &variavelDesejada);
                    switch (variavelDesejada) {
                        case 1:
                            wprintf(L"Insira a posição incial (s0), a velocidade inicial, a aceleração e o tempo.\n");
                            scanf("%f %f %f %f", s0, v0, a, t);
                            wprintf(L"Posição do móvel: %.2f\n m", posicaoMUV(v0, s0, a, t));
                            break;
                        case 2:
                            wprintf(L"Insira a velocidade inicial, a aceleração e tempo.\n");
                            scanf("%f %f %f", &v0, &a, t);
                            wprintf(L"Velocidade do móvel: %.2f m/s", velocidadeMUV(v0, a, t));
                            break;
                    }
                    break;

            }
            break;
        // Definição do caso de entrada inválida
        default:
            wprintf(L"Entrada inválida, execute o programa novamente.\n");
    }

    return 0;
}