#include"main.h"

/**
 * print_hex - prints an hexadecimal number
 * @args: arguments.
 * Return: counter.
 */
int print_hex(va_list args)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/**
 * print_heX - print heX
 * @args: arg list
 * Return: number of printed char
 */

int print_heX(va_list args)
{
	char *str;
	int sum;

	str = convert_base(va_arg(args, unsigned int), 16, 1);
	sum = _puts(str, 0);
	free(str);
	return (sum);
}
