#include <stdio.h>

int isPrime(int input) {
    int remainder[4] = {2, 3, 5, 7};
    for (int i = 0; i < 4; i++) {
        if(input % remainder[i] == 0) return 0;
    }

    return 1;
}

int main(){
    for (int i = 11; i < 20; i = i + 2) {
        if(isPrime(i)) printf("%d is prime! \n", i);
    }
    return 0;
}