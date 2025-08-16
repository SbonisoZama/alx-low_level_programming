#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	return(c >= 'a' && 'z' <= c);
}
