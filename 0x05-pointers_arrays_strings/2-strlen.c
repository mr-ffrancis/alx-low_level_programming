#include "main.h"
#include <string.h>

/**
 *_strlen - Entry Point
 * @s: ponter to char locaTION
 */

int _strlen(char *s)
{
	int c = 0;
	while (*(s + c) != '\0')
	{
		c = c + 1;
	}

	return (c);
}
