#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * islower - functionn checks lowercase character
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	return ( c >= 'a' && c <= 'z');
}
