#include <stdio.h>

int isPrime(int input){
    int checks[4] = {2,3,5,7};

    for(int i= 0; i < 4; i ++){
        if(input % checks[i] == 0) return 0;
    }
    
    return 1;
}

int main(){
    for(int i = 11; i<= 19; i = i + 2){
        if(isPrime(i)) printf("%d is prime! \n", i);
    }    
    return 0;
}