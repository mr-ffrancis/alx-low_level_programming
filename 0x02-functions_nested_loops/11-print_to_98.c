#include "main.h"
/**
 *print_to_98 - Entry Point
 *
 *@n: value
 *Print Alphabet
 *Return: 0 on sucess
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
