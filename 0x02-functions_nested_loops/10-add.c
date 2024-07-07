#include <stdio.h>
#include "main.h"
/**
 * add - Calculates the sum of two integers
 * @a: The first integer
 * @b: The second integer
 * 
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
    return a + b;
}
int main() {
    int num1 = 3, num2 = 2;
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);
    return 0;
}
