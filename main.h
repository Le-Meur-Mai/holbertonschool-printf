#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct pourcent{

char *specifieur;
int (*f)(va_list args);

}p;

int _strlen(char *s);
int _putchar(char c);
int print_str(va_list args);
int print_int(va_list args);
int print_pourcent(va_list args);

int (*get_sf_func(char *s))(va_list args);

#endif