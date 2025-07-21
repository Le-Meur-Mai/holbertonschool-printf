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
