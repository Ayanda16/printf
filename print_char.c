#include"main.h"

/**
 * print_char - prints a character
 * @args: arguments
 * Return: number of printed characters
 */
int print_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1)
}
