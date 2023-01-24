#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<limits.h>

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
int print_integer(va_list args);
int _putchar(char c);
int print_number(va_list args);
int print_binary(va_list args);
int print_reversed(va_list arg);
int rot13(va_list args);
int print_unsigned_integer(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_heX(va_list args);
int _puts(char *str, int ascii);
char *convert_base(unsigned long nb, unsigned int base, int upper);
int convert_alpha_numeric(int nb, int upper);
int _strlen_recursion(char *s);
int print_pointer(va_list args);
char *convert_base_pointer(unsigned long p);
int _write_char(char c);
#endif
