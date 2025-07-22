#include "main.h"

int print_char(va_list args)
{
    char character = va_arg(args, int);
    _putchar(character);

    return (1);
}

int print_str(va_list args)
{
    char *str = va_arg(args, char *);  
    int i = 0;

    if (!str)
        str = NULL;  
    while (str[i]) {
        _putchar(str[i]);
        i++;
    }
    return (i);
}

int print_int(va_list args)
{
    char *str = va_arg(args, char *);  
    int i = 0;

    if (!str)
        str = NULL;  
    while (str[i]) {
        _putchar(str[i]);
        i++;
    }
    return (i);
}
