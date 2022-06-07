#include <stdio.h>
#include <locale.h>

/*
    1 - descobre se o n é par ou ímprar
    2 - advinha um número
*/

void advinha(int n) {
    int chute;
    do {
        wprintf(L"Chute o número: ");
        scanf("%d", &chute);
        if (chute < n) {
            wprintf(L"Chutou baixo, tente novamente.\n");
        } else if (chute > n) {
            wprintf(L"Chutou alto, tente novamente.\n");
        } else {
            wprintf(L"Parabéns! Você acertou.\n");
            break;
        }
    } while (1);
}

int randint(int n) {
  if ((n - 1) == RAND_MAX) {
    return rand();
  } else {
    // Supporting larger values for n would requires an even more
    // elaborate implementation that combines multiple calls to rand()
    assert (n <= RAND_MAX)

    // Chop off all of the values that would cause skew...
    int end = RAND_MAX / n; // truncate skew
    assert (end > 0);
    end *= n;

    // ... and ignore results from rand() that fall above that limit.
    // (Worst case the loop condition should succeed 50% of the time,
    // so we can expect to bail out of this loop pretty quickly.)
    int r;
    while ((r = rand()) >= end);

    if (rand() % 2 == 0) {
        return r % n;
    } else {
        return (-1) * (r % n);
    }
    
  }
}

int main() {
    int opcao;
    wprintf(L"Insira sua opção: 1 - Descobrir se o número é par ou ímpar\n2 - Advinhe o número!\n-1 - Sair :( ");
    scanf("%d", &opcao);

    do {
        switch (opcao) {
            case 2:
                int n;
                wprintf(L"Você quer chutar números de 0 até quanto?");
                scanf("%d", &n);
                advinha(randint(n));
                break;
            default:
                wprintf(L"Insira uma opção válida.\n\n");
        }              
    } while (1);
}