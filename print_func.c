#include "main.h"

/**
 * print_char - prints character
 *
 * @type: list of argument pointing to char to be printed
 *
 * Return: 1
 */
int print_char(va_list type)
{
	char c;

	c = va_arg(type, int);
	_putchar(c);
	return (1);
}

/**
 * print_str - print string
 *
 * @type: list of argument pointing to float to be printed
 *
 * Return: number of character printed
 */
int print_str(va_list type)
{
	int n = 0;
	char *str;

	str = va_arg(type, char *);
	if (str == NULL)
		str = "(null)";

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	return (n);
}

/**
 * print_pcent - prints percentage symbol
 *
 * @type: list of argument
 *
 * Return: 1
 */
int print_pcent(__attribute__((unused))va_list type)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - prints integer
 *
 * @type: list of argument pointing to integer to be printed
 *
 * Return: number of integer printed
 */
int print_int(va_list type)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(type, int);
	div = 1;
	len = 0;
	if (i < 0)
	{
		len = len + _putchar('-');
		num = i * -1;
	}
	else
		num = i;

	while (num / div > 9)
		div = div * 10;

	while (div != 0)
	{
		len = len + _putchar(num / div + '0');
		num =  num % div;
		div = div / 10;
	}
	return (len);
}

/**
 * print_unsign_int - print unsigned integer
 *
 * @type: list of argument pointing to integer to be printed
 *
 * Return: number of integer printed
 */
int print_unsign_int(va_list type)
{
	unsigned int num = va_arg(type, unsigned int);
	int div = 1, count = 0;

	if (num < 1)
		return (-1);

	while (num / div > 9)
	{
		div = div * 10;
	}

	while (div != 0)
	{
		count = count + _putchar(num / div + '0');
		num = num % div;
		div = div / 10;
	}
	return (count);
}
