#include <stdio.h>

double fahrenheitToCelsius(double f) {
    return (5 * (f - 32)) / 9;
}

double celsiusToFahrenheit(double c) {
    return (9 * c + (32 * 5)) / 5;
}