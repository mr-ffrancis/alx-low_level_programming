#include "main.h"
/**
 *_islower - Entry Point
 *@c:is an acii alpabetical parameter
 *Return: 0 on sucess
 */
int _islower(int c)
{
	if (c > 97 && c <= 122)
		return (1);
	else
		return (0);
}
