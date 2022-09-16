#include "main.h"
/**
 * more_numbers - Entry point
 * Print: Number 0 - 14
 *
 */
void more_numbers(void)
{
	int b, c;

	for (c = 0; c < 10; c++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
