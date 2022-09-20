#include "main.h"
/**
 * _puts - Entry Point
 *@str: strings
 *
 */
void _puts(char *str)
{
	int c;

	c = strlen(*str);
	for (int i = 0; i <= c; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
