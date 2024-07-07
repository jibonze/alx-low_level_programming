#include <stdio.h>

int main(void)
{
    int num;
    int total_sum = 0;

    for (num = 1; num < 1024; num++)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            total_sum += num;
        }
    }

    printf("%d\n", total_sum);
    return 0;
}
