#include <stdio.h>

int qualityPoints(double avg) {
    if (avg >= 90) {
        return 4;
    } else if (avg >= 80) {
        return 3;
    } else if (avg >= 70) {
        return 2; 
    } else if (avg >= 60) {
        return 1;
    } else {
        return 0;
    }
}