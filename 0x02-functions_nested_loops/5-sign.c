#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * print_sign(int n) - function that prints the sign of a number
 *
 * Returns 1 and prints + if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	}
	if (n == 0)
	{
		_putchar('0');
		return 0;
	}
	if (n < 0)
	{
		_putchar('-');
		return -1;
	}
}
	
