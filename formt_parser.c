#include "main.h"

/**
 * parse_formt - checks for a valid specifier and assign the proper
 * function for its output.
 *
 * @fmt: character format
 *
 * Return: pointer to the function that matches each specified format
 */
int (*parse_formt(char fmt))(va_list)
{
	int i;
	func_s print_sp[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pcent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_bin},
		{'u', print_unsign_int},
		{'o', print_octal_int},
		{'\0', NULL}
	};

	for (i = 0; print_sp[i].fs; i++)
	{
		if (fmt == print_sp[i].fs)
		{
			return (print_sp[i].fp);
		}
	}
	return (NULL);
}
