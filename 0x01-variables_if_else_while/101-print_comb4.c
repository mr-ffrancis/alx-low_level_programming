#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * assigns a randon number to variable n
 * checks if the number is positive or negative and prints the result
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int c;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if (a != b && b != c && c != a && a < b && b < c)
				{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a == 55 && b == 56 && c == 57)
				{
				break;
				}
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
