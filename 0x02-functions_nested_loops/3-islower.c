#include "main.h"
/**
 *_islower - Entry Point
 *
 *Return: 0 on sucess
 */
int _islower(int c)
{	
	if (c > 97 && c <= 122)
		return (1);
	else
		return (0);
}
