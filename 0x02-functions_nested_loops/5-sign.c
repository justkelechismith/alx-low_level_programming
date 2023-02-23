#include "main.h"
/**
 * print_sign - functionthat print signs
 *
 * @n: parameter to be evaluated
 *
 * Return: 1,0 and -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
