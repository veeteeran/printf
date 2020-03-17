#include "holberton.h"
/**
 * print_number - print an int
 * @n: the int to print
 *
 * Return: number of digits printed
 */
int print_number(int n)
{
	int digit, counter = 0, was_min = 0, skip_zero = 1;
	int base_ten = 1000000000, min  = -2147483648, count = 0;

	while (counter < 9)
	{
		/* check for negative int */
		if (n < 0)
		{
			/* add one to min_int to avoid errors*/
			if (n == min)
			{
				n += 1;
				was_min = 1;
			}
			n *= -1;
			_putchar('-');
			count++;
		}
		/* avoids problems when next digit is zero */
		digit = (n / base_ten) % 10;
		/* decrease base_ten until reaches first place */
		if (digit == 0 && skip_zero)
			base_ten /= 10;
		else
		{
			skip_zero = 0;
			_putchar(digit + '0');
			count++;
			base_ten /= 10;

		}
		counter++;
	}
	/* check if num was min_int and add 1 tp output accordingly */
	if (was_min > 0)
		_putchar(n % 10 + '1');
	else
		_putchar(n % 10 + '0');
		count++;

	if (n < 0)
		count++;
	return (count);
}
