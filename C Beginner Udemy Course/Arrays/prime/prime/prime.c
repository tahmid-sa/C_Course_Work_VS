#include <stdio.h>
#include <stdbool.h>

int main() {
    int primeNums[100] = { 2, 3 };
    int primeSize = 2;
    bool isPrime = true;

    for (int num = 5; num <= 100; num++) {
        isPrime = true;
        for (int primeIndex = 0; primeIndex < primeSize; primeIndex++) {
            if (num % primeNums[primeIndex] == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true) {
            primeNums[primeSize] = num;
            primeSize++;
        }
    }

    for (int num = 0; num < 100; num++) {
        printf("%d\n", primeNums[num]);
    }


    return 0;
}