#include <stdio.h>
#include "main.h"
/**
 * _isupper - Entry Point
 * @c: is the character
 * Return: 1 on success
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}



