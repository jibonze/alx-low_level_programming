#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: Pointer to an integer.
 */
void reset_to_98(int *n)
{
    if (n != NULL)  // Check if the pointer is valid
        *n = 98;    // Update the value pointed to by n
}

int main()
{
    int num = 402;
    printf("n=%d\n", num);
    reset_to_98(&num);
    printf("n=%d\n", num);
    return 0;
}
