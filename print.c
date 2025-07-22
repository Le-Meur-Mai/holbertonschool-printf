#include <stdlib.h>
#include "main.h"

int print_character(va_list args)
{
	char character = va_arg(args, int);

	_putchar(character);
	return (1);
}

int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	int i = 0;

	if (!string)
		string = "(null)";
	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}

int print_integer(va_list args)
{
	int number = va_arg(args, int);
	int modulo = 0, i = 0, count = 0, negative = 0;
	char *string;

	string = malloc(12);
	if (number < 0)
	{
		negative = 1;
		number = -number;
	}
	else if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number > 0)
	{
		modulo = number % 10;
		number = number / 10;
		string[i] = '0' + modulo;
		i++;
	}
	if (negative == 1)
	{
		string[i] = '-';
		i++;
	}
	string[i] = '\0';
	count = _string_lenght(string);
	while (count >= 0)
	{
		_putchar(string[count]);
		count--;
	}
	count = _string_lenght(string);
	free(string);
	return (count);
}
