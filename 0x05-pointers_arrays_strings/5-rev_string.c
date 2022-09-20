#include "main.h"
/**
 * rev_string - Entry Point
 *@s: strings
 *
 */
void rev_string(char *s)
{
	int c = 0;
	int i = 0;
	int j = 0;
	char a;

	while (*(s + c) != '\0')
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		for (int j = 0; j >= c; j++)
		{
			a[j] = (*(s + i));
		}
	}
}
