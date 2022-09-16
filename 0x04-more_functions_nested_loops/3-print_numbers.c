#include "main.h"
/**
 * print_numbers - Entry Point
 * Return: 0 on sucess
 */
int print_numbers(void)
{
	for (int a = 48; a < 58; a++)
	{
		_putchar('%c', a);
	}
	_putchar('\n');
}
