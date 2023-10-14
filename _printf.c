#include "main.h"

/**
 * _printf - a function that performs similarly to printf function
 * It selects the correct function to print
 *
 * @format: identifier to be considered
 *
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	int i, point;
	int (*fp)(va_list);
	va_list type;

	if (format == NULL)
		return (-1);

	va_start(type, format);
	point = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(type);
				return (-1);
			}
			fp = parse_formt(format[i + 1]);
			if (fp == NULL)
			{
				_putchar('%');
				_putchar(format[i + 1]);
				point += 2;
			}
			else
				point = point + fp(type);
			i++;
		}
		else
		{
			if (_putchar(format[i]) == -1)
			{
				return (-1);
			}
			point++;
		}
	}
	va_end(type);
	return (point);
}
