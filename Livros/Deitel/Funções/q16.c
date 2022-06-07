#include <stdio.h>
#include <locale.h>

int integerPower(int a, int b);

// a^b
int integerPower(int a, int b)  {
    int res = 1;
    
    for (int i = 0; i < b; i++) {
        res *= a;
    }

    return res;
}

int main() {
    int a, b;
    scanf("%f %f", &a, &b);

    wprintf("%d^%d = %d", a, b, integerPower(a,b));
    return 0;   
}