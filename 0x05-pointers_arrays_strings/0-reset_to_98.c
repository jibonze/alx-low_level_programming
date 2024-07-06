#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: Pointer to an integer.
 */
void reset_to_98(int *n)
{
    if (n != NULL)
        *n = 98;
}

int main()
{
    int num = 402;
    printf("n=%d\n", num);
    reset_to_98(&num);
    printf("n=%d\n", num);
    return 0;
}
