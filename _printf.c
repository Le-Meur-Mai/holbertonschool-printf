#include "main.h"
#include <stdarg.h>
/**
 *
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int result = 0;
	int (*speformat)(va_list);
	va_list args;

	if (format[0] == '"' && format != NULL)
	{
		for (; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				speformat = get_sf_func(format[i + 1]);
				if (format[i + 1] == 's')
				{
					speformat(va_arg(args, char *));
				}
				else
				{
					speformat(va_arg(args, int));
				}
				i++;
			}
			if (format[i] == '"')
			break;

			result++;
			_putchar(format[i]);
		}
	/*}*/
	return (0);
}