#include "main.h"
/**
 * _puts - Entry Point
 *@str: strings
 *
 */
void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
	}
	_putchar('\n');
}
