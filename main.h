#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _string_lenght(char *s);
int _putchar(char c);
void print_error(void);
int print_character(va_list args);
int print_string(va_list args);
int print_integer(va_list args);

typedef struct specifier_function_structur
{
	char specifier;
	int (*function_specifier_format)(va_list args);
} sf;

int (*choose_function_specifier_format(char s))(va_list);

#endif
