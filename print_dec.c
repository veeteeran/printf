#include "holberton.h"
/**
 * print_dec - print a decimal number
 * @args: the decimal number to print
 *
 * Return: length of string printed
 */
int print_dec(va_list args)
{
	int len = 0;

	len = print_number(va_arg(args, int));
	return (len);
}
