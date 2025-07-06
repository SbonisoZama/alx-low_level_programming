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

	while (s < 10)
	{
		putchar(s + '0');
		if (s != 9)
		{
			putchar(',');
			putchar(' ');
		}
		s++;
	}
	putchar('\n');

	return (0);
}
