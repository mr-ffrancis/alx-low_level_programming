#include "main.h"
/**
 * more_number - Entry point
 * Print: Number 0 - 14
 *
 */
void more_numbers(void)
{
	for (int a = 48; a <= 57; a++)
	{
		for (int b = 48; b <= 57; b++)
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
				break;
		}
	}
	_putchar('\n');
}
