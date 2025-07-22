#include "main.h"

int (*choose_function_specifier_format(char s))(va_list args)
{
	sf specifier_format[] = {
		{'c', print_character},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};
	int i = 0;

	while (specifier_format[i].specifier != '\0')
	{
		if (s == specifier_format[i].specifier)
			return (specifier_format[i].function_specifier_format);
		i++;
	}

	s++;
	return (NULL);
}
