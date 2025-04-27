#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		if (lower_case == 'q' || lower_case == 'e')
		{
			continue;
		}
		putchar(lower_case);
	}

	putchar('\n');

	return (0);

}
