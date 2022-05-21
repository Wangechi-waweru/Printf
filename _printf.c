#include "main.h"

/**
  * _printf - produces output acording to a given format
  * @format: format string containing the characters and the specifiers
  *
  *Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	va_list lists;
	int k, len;
	int (*get_ptr)(va_list, int);

	va_start(lists, format);
	if (!(format))
		return (-1);
	k = 0;
	len = 0;
	while (format && format[k])
	{
		if (format[k] == '%')
		{
			k++;
			if (format[k] == '%')
			{
				len += _putchar(format[k]);
				k++;
				continue;
			}
			if (format[k] == '\0')
				return (-1);
			get_ptr = get_print_func(format[k]);
			if (get_ptr != NULL)
			len = get_ptr(lists, len);

			else
			{
			len += _putchar(format[k - 1]);
			len += _putchar(format[k]);
			}
			k++;
		}
		else
		{
			len += _putchar(format[k]);
			k++;
		}
	}
	va_end(lists);
	return (len);
}
