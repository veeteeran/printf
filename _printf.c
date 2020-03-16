#include "holberton.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	fmt_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
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
	_putchar('\n');
	return (count);
}
