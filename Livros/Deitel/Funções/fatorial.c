#include <stdio.h>
#include <locale.h>

long fatorial(long n);

long fatorial(long n) {
    if (n == 1) {
        return n;
    } else {
        return (fatorial(n-1) * n);
    }
}

int main() {
    setlocale(LC_ALL, "");
    int n;
    scanf("%d", &n);
    wprintf(L"%d! = %d\n", n, fatorial(n));
    return 0;
}