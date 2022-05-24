/*
    Enunciado:
        Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de objetos. O
        vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor total de suas vendas.
        O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de
        cada peça deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços
        e as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com tamanho dez).
        Depois, determine e mostre:
            a) um relatório contendo: quantidade vendida, valor unitário e valor total de cada objeto. Ao final,
            deverão ser mostrados o valor geral das vendas e o valor da comissão que será paga ao vendedor; e
            b) o valor do objeto mais vendido e sua posição no vetor (não se preocupe com empates).
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    // Talvez um struct seria interessante pra esse uso. Mas não é o escopo do livro. 
    float preco[10];
    int qtdVendida[10];

    // Leitura dos vetores.
    for (int i = 0; i < 10; i++) {
        wprintf(L"Insira o preço (R$) e a quantidade de unidades vendidas do produto %d. ", i+1);
        scanf("%f %d", &preco[i], &qtdVendida[i]);
    }

    // Faturamento parcial - variável temporária que mostra o quanto se faturou com um produto do vetor
    // Faturamento total - soma de todos os faturamentos parciais
    float faturamentoTotal = 0, faturamentoParcial;

    for (int i = 0; i < 10; i++) {
        faturamentoParcial = preco[i] * qtdVendida[i];
        wprintf(L"Com %d unidades do produto %d, a um preço unitário de R$ %.2f, faturaram-se R$ %.2f.\n", qtdVendida[i], i+1, preco[i], faturamentoParcial);
        faturamentoTotal += faturamentoParcial;
    }

    float comissao = faturamentoTotal * 0.05;

    wprintf(L"O faturamento total foi R$ %.2f e R$ %.2f serão pagos como comissão ao vendedor.\n", faturamentoTotal, comissao);

    // Definição do objeto mais vendido no vetor
    
    /*
        max - variável temporária que mantém o valor mais alto já encontrado durante o loop
        indice - variável que mantém o índice do produto mais vendido
    */
    int max = 0, indice = 0;


    // Definição do produto mais vendido
    for (int i = 0; i < 10; i++) {
        if (qtdVendida[i] > max) {
            max = qtdVendida[i];
            indice = i;
        }
    }

    wprintf(L"O produto mais vendido custa R$ %.2f e sua posição no vetor é %d.\n", preco[indice], indice);

    return 0;
}