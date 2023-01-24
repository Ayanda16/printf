#include"main.h"

/**
 * print_pointer - prints a pointer
 * @args: args
 * Return: number of printed char
 */

int print_pointer(va_list args)
{
	char *str;
	int sum = 0;
	unsigned long p = (unsigned long) va_arg(args, void*);

	if (!p)
	{
		sum += _puts("(nil)", 0);
		return (sum);
	}

	str = convert_base_pointer(p);
	if (!str)
		return (0);
	sum += _puts("0x", 0);
	sum += _puts(str, 0);
	free(str);
	return (sum);
}
