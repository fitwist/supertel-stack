#include <stdio.h>

int main() {
    int x = 4;
    if (x != 2 && x != 3) {
        if (x != 5 && x != 7) {
            printf("x is not one of the first prime numbers!");
        }
    }
    return 0;
}