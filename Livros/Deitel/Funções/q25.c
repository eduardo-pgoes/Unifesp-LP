#include <stdio.h>

float minimum(float a, float b, float c) {
    if ((a != b) && (a != c)) {
        if ((a < b) && (a < c)) {
            return a;
        } else if ((b < a) && (b < c)) {
            return b;
        } else {
            return c;
        }
    } else if ((a == b) || (b == c)) {
        if (a < c) {
            return a; 
        } else {
            return c;
        }
    } else {
        return a;
    }
}

int main() {
    return 0;
}