#include "main.h"

/**
  * get_print_func - returns pointer to function
  * @c: character to find pointer function
  *
  * Return: pointer to function or NULL.
  */
int (*get_print_func(char c))(va_list, int)
{
	forms specifics[] = {
		{'c', print_ch},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsignd},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_heX},
		{'R', print_rot13},
		{'b', print_b},
		{'S', print_Str}
	};

	int k;

	for (k = 0; specifics[k].spec; k++)
	{
		if (c == specifics[k].spec)
		{
			return (specifics[k].fspec);
		}
	}

	return (NULL);
}
