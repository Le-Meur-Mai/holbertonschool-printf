#include "main.h"

int print_str(va_list args)
{
    int i = 0;

    while (args[i])
    {
        _putchar(arg[i]);
        i++;
    }
    return (i);
}

int print_int(va_list args)
{
    int i = 0;

    while (args[i])
    {
        _putchar('0' + arg[i]);
        i++;
    }
    return (i);
}

int print_pourcent(va_list args)
{
    _putchar('%');
    return (1);
}
