#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int num, fat = 1;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fat *= i;
    }

    wprintf(L"%d! = %d", num, fat);

    return 0;
}