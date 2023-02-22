#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10* alphabets
 *
 * Return : always 0
 */
void print_alphabet_x10(void)
{
	int q;
	char w;

	for (q = 1 ; q <= 10 ; q++)
	{
		for (w = 'a' ; w <= 'z' ;  w++)
			_putchar(w);
		_putchar('\n');
	}
}
