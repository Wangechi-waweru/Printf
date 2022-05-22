#include "main.h"

/**
 * print_ints - prints an integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_ints(va_list l, flags_t *f)
{
	int i = va_arg(l, int);
	int k = count_digit(i);

	if (f->space == 1 && f->plus == 0 && i >= 0)
		k += _putchar(' ');
	if (f->plus == 1 && i >= 0)
		k += _putchar('+');
	if (i <= 0)
		k++;
	print_number(i);
	return (k);
}

/**
 * print_unsigned - prints an unsigned integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert(n, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @t: integer to be printed
 */
void print_number(int t)
{
	unsigned int t1;

	if (t < 0)
	{
		_putchar('-');
		t1 = -t;
	}
	else
		t1 = t;

	if (t1 / 10)
		print_number(t1 / 10);
	_putchar((t1 % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @a: integer to evaluate
 * Return: number of digits
 */
int count_digit(int a)
{
	unsigned int b = 0;
	unsigned int s;

	if (a < 0)
		s = a * -1;
	else
		s = a;
	while (s != 0)
	{
		s /= 10;
		b++;
	}
	return (b);
}
