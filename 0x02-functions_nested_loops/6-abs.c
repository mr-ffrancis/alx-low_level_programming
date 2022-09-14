#include "main.h"
/**
 *_abs - Entry Point
 *@n:is an acii alpabetical parameter
 *Return: 0 on sucess
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n*-1;
		return (n);
	}
}
