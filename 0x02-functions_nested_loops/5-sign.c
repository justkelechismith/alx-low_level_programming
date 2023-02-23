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
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0,");
		return (0);
	}
	else
	{
		printf("-, ");
		return (-1);
	}
}
