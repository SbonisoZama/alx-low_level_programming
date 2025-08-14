#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_alphabet_x10 - printing x10 the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		char alpha = 'a';		
		
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
