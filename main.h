#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct func - structure for print functions
 *
 * @fs: character pointer of format specifier
 * @fp: function pointer for the conversion specifier
 */
typedef struct func
{
	char fs;
	int (*fp)(va_list);
} func_s;

int _putchar(char);
int _printf(const char *format, ...);
int print_char(va_list);
int print_str(va_list);
int print_pcent(va_list);
int print_int(va_list);
int (*parse_formt(char fmt))(va_list);
int print_bin(va_list);
int _put(char *str);
char *change(unsigned long int n, int base, int lcase);
int print_unsign_int(va_list);

#endif /* _MAIN_H_ */
