#include <stdlib.h>
#include "main.h"

/**
 * print_character - Prints a character
 * @args: The va_list containing the character to print
 *
 * Return: Number of characters printed (always 1)
 */

int print_character(va_list args)
{
	char character = va_arg(args, int);

	_putchar(character);
	return (1);
}

/**
 * print_string - Prints a string
 * @args: The va_list containing the string to print
 *
 * Return: Number of characters printed in the string
 */

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

/**
 * print_integer - Prints integer
 * @args: The va_list containing the integer to print
 *
 * Return: Number of characters printed
 */

int print_integer(va_list args)
{
	long number = va_arg(args, int);
	int modulo = 0, i = 0, count = 0, length = 0, negative = 0;
	char *string;

	string = malloc(12);
	if (string == NULL)
		return (0);
	if (number < 0)
	{
		negative = 1;
		number = -number;
	}
	else if (number == 0)
	{
		_putchar('0');
		free(string);
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
	length = _string_length(string) - 1;
	while (length >= 0)
		_putchar(string[length--]);
	count = _string_length(string);
	free(string);
	return (count);
}

/**
 * reverse_print_string- print a string backward
 * @args: The va_list containing the string to print backward
 *
 * Return: Number of characters printed
 */

int reverse_print_string(va_list args)
{
	int i = 0;
	char *string;

	string = va_arg(args, char *);
	if (!string)
	{
		string = "(null)";
	}

	i = _string_length(string) - 1;
	while (i >= 0)
	{
		_putchar(string[i]);
		i--;
	}
	i = _string_length(string);

	return (i);
}
