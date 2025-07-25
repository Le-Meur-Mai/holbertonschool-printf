#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len1, len2;

   len1 = _printf("%r\n", "bonjour");
   len2 = printf("%r\n", "bonjour");
   printf("%d\n", len1);
   _printf("%d\n", len2);
    return (0);
}
