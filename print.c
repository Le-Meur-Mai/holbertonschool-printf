#include <stdlib.h>
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
        str = "(null)";  
    while (str[i]) {
        _putchar(str[i]);
        i++;
    }
    return (i);
}

int print_int(va_list args)
{
    int entier = va_arg(args, int);
    int modulo = 0, i = 0, count = 0, negative = 0;
    char *string;
    
    string = malloc(12);

    if (entier < 0)
    {
        negative = 1;
        entier = -entier;
    }
    else if (entier == 0)
    {
        _putchar('0');
        return(1);
    }

    
    while (entier > 0)
    {
        modulo = entier % 10;
        entier = entier / 10;
        string[i] = '0' + modulo; 
        i++;
    }
    
    if (negative == 1)
    {
        string[i] = '-';
        i++;
    }

    string[i] = '\0';
    
    count = _strlen(string);
    
    while (count >= 0)
    {
        _putchar(string[count]);
        count--;
    }

    count = _strlen(string);
    free(string);
    return(count);
}
