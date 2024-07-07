#include <stdio.h>

int main() {
    unsigned long int a = 1;
    unsigned long int b = 2;
    unsigned long int next;

    printf("%lu, %lu", a, b);  // Print the first two Fibonacci numbers

    for (int i = 2; i < 98; ++i) {
        next = a + b;
        printf(", %lu", next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
