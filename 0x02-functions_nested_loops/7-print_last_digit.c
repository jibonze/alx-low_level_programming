/* print_last_digit.c */
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to check
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
  int last_digit = n % 10;
  putchar(last_digit + '0'); // Print the last digit as a character
  return last_digit;
}
