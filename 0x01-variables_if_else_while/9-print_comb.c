#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = 0;

	while (s >= 9)
	{
		putchar(s);
		putchar(',');
		putchar(' ');
		s++;
	}

	return (0);
}
