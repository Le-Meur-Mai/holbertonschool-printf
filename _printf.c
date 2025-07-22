#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int (*function_pointer_specifier_format)(va_list);
	va_list args;


	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			function_pointer_specifier_format = choose_function_specifier_format(format[i]);
			if (function_pointer_specifier_format != NULL)
				count += function_pointer_specifier_format(args);
			else
				count += _putchar('%');
		}
		else
		count += _putchar(format[i]);
	}

	va_end(args);
	return (count);
}
