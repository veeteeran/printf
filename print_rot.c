#include "holberton.h"
#include <stdlib.h>
/**
 * print_rot - encode a string using rot13
 * @args: the string to encode
 *
 * Return: the length string
 */
int print_rot(va_list args)
{
	int idx1 = 0;
	int idx2, len;
	char *str;
	char *ptr;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		_printf("(null)");
		return (6);
	}
	len = _strlen(str);
	ptr = malloc(sizeof(char) * len);
	while (idx1 < len)
	{
		idx2 = 0;
		while (idx2 < 52)
		{
			if (str[idx1] == alpha[idx2])
			{
				ptr[idx1] = rot[idx2];
				break;
			}
			idx2++;
		}
		idx1++;
	}
	_printf("%s", ptr);
	return (len);
}
