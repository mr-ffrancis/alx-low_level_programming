#include "main.h"
/**
 *jack_bauer - Entry Point
 *Print Alphabet
 *Return: 0 on sucess
 *
 */

void jack_bauer(void)
{
	int a,b,c,d;

	for (a = 48; a <= 57; a++)
	{	
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
