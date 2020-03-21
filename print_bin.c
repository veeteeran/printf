#include "holberton.h"
/**
  * print_bin - convert a number to binary and print
  *
  * @args: number to conver
  *
  * Return: number of characters printed
  */
int print_bin(va_list args)
{
	unsigned long decimal_num = va_arg(args, int);
	unsigned long binary_num = 0;
	int remain, tmp = 1, count = 0;

	while (decimal_num != 0)
	{
		remain = decimal_num % 2;
		count++;
		decimal_num = decimal_num / 2;
		binary_num = binary_num + remain * tmp;
		tmp *= 10;
	}
	count--;
	_printf("%d", binary_num);
	return (count);
}
