#include "main.h"
/**
 *print_last_digit - Entry Point
 *@n:is an acii alpabetical parameters
 *Return: 0 on sucess
 *
 */
int print_last_digit(int n)
{
	int l = n  % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
	_putchar(l + 48);
	return (l);
	}
}
