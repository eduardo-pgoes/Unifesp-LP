#include <stdio.h>

int seconds(int h, int m, int s) {
    return s + m*60 + h*3600;
}

int main() {
    printf("Enter the 1st timestamp: (HH:MM:SS)");
    int h1, m1, s1;
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Enter the 2nd timestamp: (HH:MM:SS)");
    int h2, m2, s2;
    scanf("%d:%d:%d", &h2, &m2, &s2);

    printf("Seconds elapsed between timestamps: %ds", seconds((h2-h1), (m2-m1), (s2-s1)));

    return 0;
}