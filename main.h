#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _string_length(char *s);
int _putchar(char c);
int print_character(va_list args);
int print_string(va_list args);
int print_integer(va_list args);

/**
 * struct specifier_function_structur - Maps format specifiers to functions
 * @specifier: Format specifier character ('c', 's', 'd', 'i')
 * @function_specifier_format: Function pointer for handling the specifier
 *
 * Description: Structure used to associate format specifiers with their
 * corresponding handler functions for formatted output.
 */

typedef struct specifier_function_structur
{
	char specifier;
	int (*function_specifier_format)(va_list args);
} sf;

int (*choose_function_specifier_format(char s))(va_list);

#endif
