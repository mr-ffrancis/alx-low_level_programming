#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry Point
 * @c: parameter to check for digit
 * Return: 1 on success
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}



