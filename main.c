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

   len1 = _printf("%d bla\n", 303);
   len2 = printf("%d bla\n", 303);
   printf("%d\n", len1);
   _printf("%d\n", len2);
    return (0);
}