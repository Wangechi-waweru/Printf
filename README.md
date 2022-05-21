This is a printf project collaboration between Praise Waweru and Lynn Waweru.
The function _printf imitates the actual printf in the stdio.h library.
This is its prototype:
	int _printf(const char *format, ...);
	*Format contains the string to be printed.
	*_printf is a variadic function hence it receives n arguments that are replaced by n tags in the string.
FUNCTIONS
_printf.c: contains the _printf function.
get_print_func.c: returns a pointer to a function based on the format specifier.

