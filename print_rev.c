#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @args: the string to print
 *
 * Return: the length of the string
 */

int print_rev(va_list args)
{
	int length;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		_printf("(null)");
		return (-1);
	}

	length = _strlen(s) - 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}

	return (length + 1);
}
