#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar (alpha);
		alpha++;
	}
	_putchar('\n');

}
