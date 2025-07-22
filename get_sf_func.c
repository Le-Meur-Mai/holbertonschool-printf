#include "main.h"

int (*get_sf_func(char s))(va_list args)
{
    p specifieur_format[] = {
        {'c', print_char},
        {'s', print_str},
        {'d', print_int},
        {'i', print_int},
        {'\0', NULL}
    };
    int i = 0;

    
    while (specifieur_format[i].specifieur != '\0')
    {
        if (s == specifieur_format[i].specifieur)
            return (specifieur_format[i].f);
        i++;
    }

    s++;
    return (NULL);
}
