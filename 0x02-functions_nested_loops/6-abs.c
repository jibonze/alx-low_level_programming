/* _abs.c */
#include <stdio.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value for
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
  return (n >= 0) ? n : -n;
}
