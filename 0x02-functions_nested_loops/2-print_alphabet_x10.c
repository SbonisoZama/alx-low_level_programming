#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * main - printing x10 the alphabet in lowercase, follwed by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	for (int i = 1;i <= 10; i++)
	{
		char alpha = 'a';
		while (alpha < 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
