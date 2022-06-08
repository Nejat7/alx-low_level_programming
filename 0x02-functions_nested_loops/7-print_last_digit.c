#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@n: number being tested
 *Return: the last digit
 */
int print_last_digit(int n)
{
int x = n % 10;
if (x < 0)
x = -x
_putchar(x + '0');
return (x);
}

