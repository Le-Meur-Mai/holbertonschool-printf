#include "main.h"

/**
 * _putchar - Writes a character to standard output
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _string_length - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */

int _string_length(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
