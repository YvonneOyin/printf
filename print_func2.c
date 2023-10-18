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

/**
 * print_octal_int - prints octal integer
 *
 * @type: a variable list argument
 *
 * Return: number of integer printed
 */
int print_octal_int(va_list type)
{
	unsigned int num = va_arg(type, unsigned int);
	int oct[32];
	int count = 0, n;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		oct[count] = num % 8;
		num = num / 8;
		count++;
	}

	n = count - 1;
	while (n >= 0)
	{
		_putchar(oct[n] + '0');
		n--;
	}

	return (count);
}

/**
 * print_hex - prints unsigned hexadecimal integer
 *
 * @type: a variable list argument
 *
 * Return: number of printed integer
 */
int print_hex(va_list type)
{
	unsigned int num = va_arg(type, unsigned int);
	char hex[32];
	int count = 0, n, m;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		n = num % 16;
		if (n < 10)
		{
			hex[count] = n + '0';
		}

		else
		{
			hex[count] = n - 10 + 'a';
		}
		num = num / 16;
		count++;
	}

	m = count - 1;
	while (m >= 0)
	{
		_putchar(hex[m]);
		m--;
	}
	return (count);
}

/**
 * print_hex_upper - prints unsigned hexadecimal integer in uppercase
 *
 * @type: a variable list argument
 *
 * Return: number of printed integer
 */
int print_hex_upper(va_list type)
{
	unsigned int num = va_arg(type, unsigned int);
	char hex[32];
	int count = 0, n, m;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		n = num % 16;
		if (n < 10)
		{
			hex[count] = n + '0';
		}
		else
		{
			hex[count] = n - 10 + 'A';
		}
		num = num / 16;
		count++;
	}

	m = count - 1;
	while (m >= 0)
	{
		_putchar(hex[m]);
		m--;
	}

	return (count);
}
