#include <unistd.h>

/**
  * _putchar - write to stdout
  * @c: char
  *
  * Return: number of chars
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
