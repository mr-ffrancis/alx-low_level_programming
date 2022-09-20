#include "main.h"
/**
 * print_rev - Entry Point
 *@str: strings
 *
 */
void print_rev(char *s)
{
	int c = 0;

	while (*(str + c) != '\0')
		c++;
	for (int i = c; i <= 0; i--)
		_putchar(*(str + i));
	_putchar('\n');
}
