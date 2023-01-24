#include"main.h"

/**
 * _printf - produces output according to format
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}

	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	printed_chars = parser(format, f_list, args);
	va_end(args);
	return (printed_chars);
}
