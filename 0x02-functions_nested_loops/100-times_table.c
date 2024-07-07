#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The value for which to print the times table
 */
void print_times_table(int n)
{
    if (n >= 0 && n <= 15)
    {
        int row, col, product;

        for (row = 0; row <= n; row++)
        {
            for (col = 0; col <= n; col++)
            {
                product = row * col;
                if (col == 0)
                    printf("%d", product);
                else
                    printf(", %d", product);
            }
            printf("\n");
        }
    }
}
