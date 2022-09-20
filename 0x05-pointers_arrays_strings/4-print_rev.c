#include "main.h"
/**
 * print_rev - Entry Point
 *@str: strings
 *
 */
void print_rev(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	for (int i = c; i <= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
