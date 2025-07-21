#include "main.h"

int (*get_sf_func(char *s))(va_list args)
{
    /**p specifieur_format[] = {
        {"c", print_str},
        {"s", print_str},
        {"%", print_pourcent},
        {"d", print_int},
        {"i", print_int},
        {NULL, NULL}
    };
    int i;

    
    while (specifieur_format[i].specifieur != NULL)
    {
        if (_strcmp(s, specifieur_format[i].specifieur) == 0)
            return (specifieur_format[i].f);
        i++;
    }
    */
    s++;
    return (print_str);
}
