#include "main.h"

/**
 * _put - prints a string
 *
 * @str: string to be considered
 *
 * Return: number of character printed
 */
int _put(char *str)
{
	register int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
