#include "main.h"
/**
 * print_diagonal - Entry Point
 * Printline
 * @n: Number of times to printline
 */
void print_diagonal(int n)
{
	int a, x;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
			break;
		}
		for (x = 0; x < a; x++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
