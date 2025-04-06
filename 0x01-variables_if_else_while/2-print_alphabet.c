#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	 for (n = 97; n <= 122; n++) {
		 putchar(n);
    }
	 putchar('\n');

	return (0);
}
