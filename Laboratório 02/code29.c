#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char vogal;
    wprintf(L"Digite uma vogal em letra maiúscula: (A, E, I, O ou U): ");
    scanf("%c", &vogal);
    
    int ASCII = (vogal == 'A') ? 65 :  
                (vogal == 'E') ? 69 :
                (vogal == 'I') ? 73 :
                (vogal == 'O') ? 79 :
                (vogal == 'U') ? 85 : -1;

    (ASCII != -1) ? wprintf(L"ASCII de %c é %d.\n", vogal, ASCII) :
                    wprintf(L"ASCII de %c não está disponível.\n", vogal);

    return 0;

}