#include "holberton.h"
/**
 * print_char - prints char to screen using write
 * @args: the char to print
 *
 * Return: 1
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
