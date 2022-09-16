#include "main.h"
/**
 * print_square - Entry Point
 * print square shape
 * @n: Number of times to printline
 */
void print_square(int n)
{
	int a, x;

	for (a = 0; a < n; a++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (a <= 0)
		_putchar('\n');
}
