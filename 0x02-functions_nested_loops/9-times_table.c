#include "main.h"
/**
 *times_table - Entry Points
 *Return: 0 on sucess
 *
 */

void times_table(void)
{
	int a, b, ops;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			ops = a * b;
			_putchar(44);
			_putchar(32);
			if (ops <= 9)
			{
				_putchar(32);
				_putchar(ops + 48);
			}
			else
			{
				_putchar((ops / 10) + 48);
				_putchar((ops % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
