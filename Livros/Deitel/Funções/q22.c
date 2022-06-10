#include <stdio.h>
#include <math.h>

int integerPart(int a, int b);

// Item a)
int integerPart(int a, int b) {
    return floor((float)a/(float)b);   
}

// Item b)
int remainder(int a, int b) {
    return a % b;
}


int main() {
    return 0;
}