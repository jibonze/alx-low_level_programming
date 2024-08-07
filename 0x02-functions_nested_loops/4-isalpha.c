#include <stdio.h>
/* _isalpha.c */
#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to check
 *
 * Return: 1 if c is an alphabetic letter, 0 otherwise
 */
int _isalpha(int c)
{
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
