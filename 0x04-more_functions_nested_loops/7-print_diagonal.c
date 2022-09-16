#include "main.h"
/**
 * print_diagona - Entry Point
 * Printline
 * @n: Number of times to printline
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar(95);
	}
	for (int x = 0; x < a; x++)
	{
		_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
}
