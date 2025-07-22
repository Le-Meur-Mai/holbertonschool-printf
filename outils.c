#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

int _strcmp(char *s1, char *s2)
{
	int cpt = 0;
	int result = 0;

	while (s1[cpt] || s2[cpt])
	{
		if (s1[cpt] != s2[cpt])
		{
			result = (s1[cpt] + '0') - (s2[cpt] + '0');
			break;
		}
		cpt++;
	}
	return (result);
}

void print_error(void)
{
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');
}
