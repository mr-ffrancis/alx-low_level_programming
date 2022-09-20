#include "main.h"
/**
 * print_rev - Entry Point
 *@s: strings
 *
 */
void print_rev(char *s)
{
	int c = 0;
	int i = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
