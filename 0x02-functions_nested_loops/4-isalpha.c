#include "main.h"
/**
 * _isalpha - Entry Point
 *@c:is an acii alpabetical parameter
 *Return: 0 on sucess
 */
int _isalpha(int c)
{
	if (c > 97 && c <= 122)
		return (1);
	else if (c > 64 && c <= 90)
		return (1);
	else
		return (0);
}
