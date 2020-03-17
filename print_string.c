#include "holberton.h"
#include <unistd.h>


/**
 * print_string - prints a string
 *
 * @args: string to print
 *
 * Return: void
 */

int print_string(va_list args)
{

	char *p;

	int s;


	p = va_arg(args, char *);
	if (p == NULL)
	{
		_printf("(null)");
		return (-1);
	}

	s = _strlen(p);
	/* write included from <unistd.h> */
	write(1, p, s);
	return (s);
}

/**
 * _strlen - function that returs the length of a string
 *@s: string input by a user
 * Return: (void)
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}
