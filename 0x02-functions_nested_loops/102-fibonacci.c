#include <stdio.h>

void print_fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= n; ++i) {
        printf("%d", t1);

        if (i < n) {
            printf(", ");
        } else {
            printf("\n");
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main(void) {
    print_fibonacci(50);
    return 0;
}
