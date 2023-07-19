#include <stdio.h>

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
    unsigned int n, longestLength = 0, longestNum = 0;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    printf("Collatz sequence:\n");
    unsigned int sequenceLength = collatzSequence(n);

    if (sequenceLength > longestLength) {
        longestLength = sequenceLength;
        longestNum = n;
    }

    printf("\nLongest sequence length: %u\n", longestLength);
    printf("Starting number for longest sequence: %u\n", longestNum);
    getch();
    return 0;
}
