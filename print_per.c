#include "holberton.h"
#include <stdarg.h>

/**
 * print_per - prints a percent sign
 *
 * Return: void
 */

int print_per(va_list args)
{
	char *s;
	int p;

	s = va_arg(args, char *);
	p = _strlen(s);

	_putchar('%');
	return (p);
}

