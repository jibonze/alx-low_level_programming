#include <stdio.h>

void updateValue(int *p) {
    *p = 98;
}

int main() {
    int n = 42;
    printf("Before update: %d\n", n);
    updateValue(&n);
    printf("After update: %d\n", n);
    return 0;
}
