#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

typedef struct pourcent{

char specifieur;
int (*f)(va_list args);

}p;

int _strlen(char *s);
int _putchar(char c);
int print_str(va_list args);
int print_int(va_list args);
int print_pourcent(va_list args);


#endif