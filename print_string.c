#include "holberton.h"
#include <unistd.h>

/**
 * print_string - prints a string
 *
 * @args: string to print
 *
 * Return: void
 */

void print_string(va_list args)
{
	char *p;
	int size = strlen(p);
	unsigned int mem;

	mem = calloc(size, sizeof(char));
	if (mem == NULL)
	{
		free(mem);
		return NULL;
	}

	p = va_arg(args, char *);

	if (!p)
		p = "(nil)";
	/* write included from <unistd.h> */
	write(1, p, mem);
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
		continue;

	return (len);
}
