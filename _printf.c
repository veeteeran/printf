#include "hbtn_working.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	fmt_t types[] = {
		{"c", print_char},
		{NULL, NULL}
	};
	int i, j;
	va_list vl;

	va_start(vl, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (types[j].s)
		{
			if (format[i] == '%' && format[i + 1] == *(types[j].s))
			{
				types[j].fptr(vl);
				i++; /* move i to the placeholder */
			}
			else
			{
				_putchar(format[i]);
			}
			j++;
		}
		i++;
	}
	va_end(vl);
	_putchar('\n');
}
