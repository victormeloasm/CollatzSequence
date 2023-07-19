#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 100 //How many times you want to test it?

unsigned int collatzSequence(unsigned int n) {
    unsigned int length = 1;

    while (n > 1) {
        printf("%u ", n);

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }

        length++;
    }

    printf("%u\n", n);
    return length;
}

int main() {
    unsigned int longestLength = 0, longestNum = 0;
    int i;

    srand(time(NULL)); // Inicializa a semente do gerador de números randômicos

    for (i = 0; i < NUM; i++) {
        unsigned int n = rand() % 9001 + 1000; // Gera um número randômico entre 1000 e 10000

        printf("\nTest %d\n", i + 1);
        printf("Starting number: %u\n", n);

        printf("Collatz sequence:\n");
        unsigned int sequenceLength = collatzSequence(n);

        if (sequenceLength > longestLength) {
            longestLength = sequenceLength;
            longestNum = n;
        }

        printf("Sequence length: %u\n", sequenceLength);
        printf("Longest sequence length so far: %u\n", longestLength);
        printf("Starting number for longest sequence so far: %u\n", longestNum);
    }

    printf("\nFinal Result:\n");
    printf("Longest sequence length: %u\n", longestLength);
    printf("Starting number for longest sequence: %u\n", longestNum);

    return 0;
}
