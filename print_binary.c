#include "main.h"

/**
* print_b -checks if argument is unsigned
* @args: list of arguments
* @len: number of chars printed
*
* Rethurn: len.
*/
int print_b(va_list args, int len)
{
	unsigned int k;

	k = va_args(args, int);
	return (print_binary(k, len));
}

/**
  * print_binary - converts an unsigned int to binary.
  * @n: unsigned int 
  @len: length of charactess
  *
Return: length.
*/
int print_binary(unsigned int k, int len)
{
	if ((k / 2) != 0)
	{
		print_binary(k / 2, len);
	}
	_putchar((k % 2) + '0');
	len += find_length(k, 2);
	return (len + 1);
}
