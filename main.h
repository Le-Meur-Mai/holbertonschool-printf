#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _strlen(char *s);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
void print_error(void);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);

typedef struct pourcent
{
	char specifieur;
	int (*f)(va_list args);
} p;

int (*get_sf_func(char s))(va_list);

#endif
