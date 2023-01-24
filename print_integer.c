#include"main.h"

/**
 * print_integer - prints an integer
 * @args: list of arguments
 * Return: return characters printed
 */

int print_integer(va_list args)
{
	int len;

	len = print_number(args);
	return (len);
}
