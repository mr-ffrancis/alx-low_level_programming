#include "main.h"
/**
 *print_last_digit - Entry Point
 *@n:is an acii alpabetical parameter
 *Return: 0 on sucess
 *
 */
int print_last_digit(int n)
{
	int l = n  % 10;
	int a = _abs(l);
	_putchar(a + 48);
	return (a);
}
