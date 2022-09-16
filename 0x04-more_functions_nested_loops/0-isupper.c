#include <stdio.h>
#include "main.h"
/*
 * main - Entry Point
 * _isupper - to confirm if a character is upper or lower case.
 * Return 1 for upper and 0 for lower of @c
 *@c: is the character
 *
 */

int _isupper(int c)
{
	if (c > 65 && c <91)
	{
		return (1);
	}
	else
		return (0);
}



