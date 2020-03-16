#include "holberton.h"
/**
 * print_int - print a decimal number
 * @args: the integer to print
 *
 * Return: length of integer printed
 */
int print_int(va_list args)
{
	int len = 0;

	len = print_number(va_arg(args, int));
	return (len);
}
