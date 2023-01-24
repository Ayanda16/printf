#include"main.h"

/**
 * print_octal - print number octal base
 * @args: arg list
 * Return: number of printed char
 */

int print_octal(va_list args)
{
	char *str;
	int sum;

	str = convert_base(va_arg(args, unsigned int), 8, 0);
	sum = _puts(str, 0);
	free(str);
	return (sum);
}
