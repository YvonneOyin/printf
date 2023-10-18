#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024

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
int print_unsign_int(va_list);
int print_octal_int(va_list);
int print_hex(va_list);
int print_hex_upper(va_list);


#endif /* _MAIN_H_ */
