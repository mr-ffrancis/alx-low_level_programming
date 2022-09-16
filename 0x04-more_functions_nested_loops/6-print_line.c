#include "main.h"
/**
 * print_line - Entry Point
 * Printline
 * @n: Number of times to printline
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar(95);
	}
	_putchar('\n');
}
