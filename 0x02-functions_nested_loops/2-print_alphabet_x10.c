#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * main - print 10 times the alphabet in lowercase
 *
 * Retun: Always 0
 */

void print_alphabet_x10(void){
for(int i = 1;i <= 10; i++){
	char alpha = 'a';
	while(alpha <= 'z'){
	        _putchar(alpha);	
		alpha++;
	}
	_putchar('\n');
}	
