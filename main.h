#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdlib.h>

/**
 * struct convert - defines a structure for symbols and functions
 * @op: operator
 * @f: function associated
 */

struct convert
{
	char *op;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int parser(const char *format, conver_t f_list[], va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
