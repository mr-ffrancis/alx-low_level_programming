#include "main.h"
/**
 * _puts - Entry Point
 *@str: strings
 *
 */
void _puts(char *str)
{
	int c;

	char a[];

	a = *str;
	c = strlen(a);
	for (int i = 0; i <= c; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
