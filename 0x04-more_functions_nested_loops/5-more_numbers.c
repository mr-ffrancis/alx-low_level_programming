#include "main.h"
/**
 * more_number - Entry point
 * Print: Number 0 - 14
 *
 */
void more_numbers(void)
{
	int a, b, c;

	for (c = 0; c < 10; c++)
	{
		for (a = 48; a <= 57; a++)
		{
			for (b = 48; b <= 57; b++)
			{
				if (a < 49)
				{
					_putchar(b);
				}
				else if (a == 49 && b < 53)
				{
					_putchar(a);
					_putchar(b);
				}
				else if (a > 49)
				{
					break;
				}
			}
		}
	}
	_putchar('\n');
}
