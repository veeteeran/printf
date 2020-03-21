#include "holberton.h"
int print_rev(va_list);
int print_rot(va_list);
/**
 * _printf - prints formatted output
 * @format: string to print along with format specifiers
 *
 * Return: number of chars printed excluding null byte
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list vl;

	if (format == NULL)
		return (-1);
	va_start(vl, format);
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			i++; /* move i to next char */
			if (format[i] == '\0')
				return (-1);
			else if (format[i] == '%')
				count += _putchar('%');
			else
				count += get_format(format[i], vl);
		}
		i++;
	}
	va_end(vl);
	return (count);
}

/**
 * get_format - depending on format, it returns the call to
 * different functions to print different types
 *
 * @format: format specifier
 * @vl: arguement to print
 *
 * Return: count of printed chars
 */

int get_format(char format, va_list vl)
{
	int i = 0, count = 0;

	fmt_t types[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_dec},
		{'i', print_int},
		{'r', print_rev},
		{'R', print_rot},
		{'b', print_bin},
		{'\0', '\0'}
	};

	while (types[i].s)
	{
		if (format == types[i].s)
		{
			count = types[i].fptr(vl);
			return (count);
		}
		i++;
	}
	if (types[i].s == '\0')
	{
		count += _putchar('%');
		count += _putchar(format);
	}
	return (count);
}

