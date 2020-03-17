#include "holberton.h"
/**
 * _printf - prints formatted output
 * @format: string to print along with format specifiers
 *
 * Return: number of chars printed excluding null byte
 */
int _printf(const char *format, ...)
{
	fmt_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"i", print_int},
		{NULL, NULL}
	};
	int i, j, count = 0;
	va_list vl;

	va_start(vl, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			j = 0;
			while (types[j].s)
			{
				if (format[i + 1] == *(types[j].s))
				{
					count += types[j].fptr(vl);
					i++; /* move i to the placeholder */
				}
				j++;
			}
		}
		i++;
	}
	va_end(vl);
	return (count);
}
