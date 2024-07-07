#include <stdio.h>
#include "main.h"
int print_last_digit(int num) {
  int last_digit = num % 10;
  printf("The last digit is: %d\n", last_digit);
  return last_digit;
}

int main() {
  int number = 12345;
  print_last_digit(number);
  return 0;
}
