#include "main.h"
/**
 * puts_2 - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_2(char *str)
{
	int count = 0;

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

