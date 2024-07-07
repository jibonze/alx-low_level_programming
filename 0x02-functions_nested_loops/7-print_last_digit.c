#include <stdio.h>
#include "main.h"
int print_last_digit(int num) {
  int last_digit = num % 10;
  printf("The last digit is: %d\n", last_digit);
  return last_digit;
}
