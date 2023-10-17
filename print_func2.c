#include "main.h"

/**
 * print_bin - prints an unsigned integer in binary
 *
 * @type: a variable list argument
 *
 * Return: length of number
 */
int print_bin(va_list type)
{
	unsigned int num = va_arg(type, unsigned int);
	int len = 0;
	int buf[32], n;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buf[len] = num % 2;
		num = num / 2;
		len++;
	}

	n = len - 1;
	while (n >= 0)
	{
		_putchar(buf[n] + '0');
		n--;
	}

	return (len);
}
