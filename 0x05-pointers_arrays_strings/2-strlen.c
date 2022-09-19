#include "main.h"
#include <string.h>

/**
 *_strlen - Entry Point
 * @s: ponter to char locaTION
 */

int _strlen(char *s)
{
	int c = 1;
	while (*(s + 1) != "\0")
	{
		c = c + 1;
	}

	return (c);
}
