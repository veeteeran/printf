#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct format - print formats
 * @s: format char
 * @fptr: function to print
 */
typedef struct format
{
	char s;
	int (*fptr)(va_list);
} fmt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
int print_char(va_list args);
int print_string(va_list args);
int print_per(va_list);
int print_dec(va_list);
int print_int(va_list);
int print_rev(va_list);
int print_rot(va_list);
int _strlen(char *s);
/* int print_bin(va_list args); */
#endif /* HOLBERTON_H */
