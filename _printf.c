#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format string
 * @format: The format string containing characters and format specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int (*func_pointer_specifier_format)(va_list);
	va_list args;


	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			func_pointer_specifier_format = choose_function_specifier_format(format[i]);
			if (func_pointer_specifier_format != NULL)
				count += func_pointer_specifier_format(args);
			else if (format[i] == '%')
			{
				count += _putchar('%');
			}
			else if (format[i] >= 'A' && format[i] <= 'z')
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
			else if (format[i] == '!')
			{
				count += _putchar('%');
				count += _putchar('!');
			}
			else
				count += _putchar('%');
		}
		else
			count += _putchar(format[i]);
	}

	va_end(args);
	return (count);
}
