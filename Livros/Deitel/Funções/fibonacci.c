#include <stdio.h>
#include <locale.h>

long fibonacci(long n);

int main() {
    setlocale(LC_ALL, "");

    long n;
    scanf("%ld", &n);

    wprintf(L"fibonacci(%ld) = %ld\n", n, fibonacci(n));

    return 0;
}

long fibonacci(long n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}