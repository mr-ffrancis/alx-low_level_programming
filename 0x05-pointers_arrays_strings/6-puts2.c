#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
	if (count % 2 == 1)
		_putchar(str[count]);
	count++;
	}
}

