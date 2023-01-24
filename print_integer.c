#include"main.h"

/**
 * print_integer - prints an integer.
 * @args: list of arguments.
 * Return: return characters printed.
 */

int print_integer(va_list args)
{
	int len;

	len = print_number(args);
	return (len);
}


/**
 * print_unsigned_integer - prints an unsigned integer.
 * @args: argument list.
 * Return: number of characters printed.
 */

int print_unsigned_integer(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
