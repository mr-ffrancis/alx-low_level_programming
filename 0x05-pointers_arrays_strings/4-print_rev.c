#include "main.h"
/**
 * print_rev - Entry Point
 *@str: strings
 *
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (*(s + c) != '\0')
		c++;
	for (; c <= 0; c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
